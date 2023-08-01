//1) Заповніть масив із 50 - ти елементів незліченними числами від 1 до 99. +
//1) (використовуйте операцію залишок від поділу, щоб перевірити число на парність) +
//2) Наявність суми диференціальних елементів масиву та пошук великої кількості елементів масиву. +
//3) Знайти кількість елементів між наявністю та максимальним значенням масиву. +
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int count = 0;
    int max = 0;
    int min = 0;
    int indexmax = 0;
    int indexmin = 0;
    srand(time(NULL));
	const int size = 50;
	int arr[size];

	for (int i = 0; i < size;i++)
	{
		arr[i] = rand() % 100 - 40;
		
		if (arr[i] < 0)
		{
		    count = count + arr[i];
		}
		
		if(arr[i] > max)
		{
		    max = arr[i];
		    indexmax = i;
		}
		
		if(arr[i] < min)
		{
		    min = arr[i];
		    indexmin = 0;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	
	cout << endl << count;
	cout << endl;
	cout <<"Max = " << max;
	cout << endl;
	cout <<"Min = " << min;
	
	if(indexmin > indexmax) 
	{
	    for(int i = indexmax; i < indexmin; i++)
	    {
	        sum = arr[i] + sum;
	    }
	}
	else
	{
	    for(int i = indexmin; i < indexmax; i++)
	    {
	        sum = arr[i] + sum;
	    }
	}
	
	cout << endl;
	cout << "Sum = " << sum;
}

