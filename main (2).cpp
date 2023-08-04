#include <iostream>
#include <iomanip>
using namespace std;
void CreateArray(int [], int );
void ShowArray(int [], int );
int MaxElementIndex(int [], int);
int MultiplicationElement(int [], int );
void TransformArray(int arr[], int size);
void CopyArray(int arr[],int arr_copy[], int size);

int main()
{
    srand(time(NULL));
    const int size = 100;
    int arr[size]; 
    int arr_copy[size];
    CreateArray(arr, size);
    CopyArray(arr, arr_copy, size);
    ShowArray(arr_copy, size);
    //arr[2] = 0;
    //arr[10] = 0;
    cout << endl;
    TransformArray(arr, size);
    ShowArray(arr, size);
    //MaxElementIndex(arr, size);
    cout << endl <<"Max Index = " << MaxElementIndex(arr, size);
    //MultiplicationElement(arr, size);
    cout << endl <<"MultiplicationElement = " << MultiplicationElement(arr, size);

    return 0;
}

void CreateArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand()%100 - 20;
    }
}

void CopyArray(int arr[], int arr_copy[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr_copy[i] = arr[i];
    }
}

void ShowArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout <<setw(4) << arr[i];
    }
    cout << endl;
}

int MaxElementIndex(int arr[], int size)
{
    int max_index = 0;
    int max_element = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max_element)
        {
            max_element = arr[i];
            max_index = i;
        }
    }
    return max_index;
}

int MultiplicationElement(int arr[], int size)
{
    int index_zero_first = 0;
    int index_zero_second = 0;
    int multiplication = 1;
    bool flag_zero_first = false;
    for(int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            if(flag_zero_first == false)
            {
                index_zero_first = i;
                index_zero_second = i;
                flag_zero_first = true;
            }
            else
            {
                index_zero_second = i;
                break;
            }
        }
    }
    
    for(int i = index_zero_first + 1 ;i < index_zero_second; i++)
    {
        multiplication *= arr[i];    
    }
    
    if(multiplication == 1)
    {
        cout <<"Array have not zero element";
    }    
    
    return multiplication;
}

void TransformArray(int arr[], int size)
{
    int transformed[size];//допоміжний масив для збереження результату 
    
    //перетворюємо масив , розиіщуючи елементи в парних спочатку і непарних позиціях у другій половині
    int even_index = 0;
    int odd_index = size % 2;
    
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2)
        {
            transformed[i] = arr[even_index];
            even_index += 2;//збільшуємо індекс парного елемента на 2
        }
        else
        {
            transformed[i] = arr[odd_index];
            odd_index += 2;//збільшуємо індекс непарного елемента на 2
        }
    }
    
    //копіюємо перетворений масив назад в початковий 
    for(int i = 0; i < size; i++)
    {
        arr[i] = transformed[i];
    }
}










