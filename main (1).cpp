//Заповнити масив з 100 виппадкових елементів
//Відсортувати в порядку спадання
//знайти суму негативних елементів(тобто меньше 0)

#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

void CreateArray(int [], int );
void ShowArray(int [], int );
int SumNegativeElement(int[], int);

int main()
{
    srand(time(NULL));
    const int size = 101;
    int arr[size];
    CreateArray(arr, size);
    ShowArray(arr, size);
    //SumNegativeElement(arr, size);
    cout << endl << "Sum = " << SumNegativeElement(arr, size);

    return 0;
}

void CreateArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand()% 100 - 50;
    }    
}    

void ShowArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        sort(arr, arr + size, greater <int>());//Функція std::sort порівнює елементи за допомогою функції greater<int>(), 
                                               //яку ми передали як третій аргумент.
                                               //Коли greater<int>() порівнює два елементи a та b, вона порівнює їх у 
                                               //зворотному порядку, тобто перевіряє,
                                               //чи a є менше b, а не чи a є більше b як у звичайному порівнянні.
                                               //В результаті, функція std::sort сортує елементи у порядку спадання, де
                                               //більші значення розташовуються перед меншими.
        cout << setw(4) << arr[i];
    }
}

int SumNegativeElement(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
            sum += arr[i];
    }
    return sum;
}









