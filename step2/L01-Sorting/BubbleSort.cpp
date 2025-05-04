#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int size;
    cout << " Enter Array Size : ";
    cin >> size;

    int arr[size];
    cout << "Enter Array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    BubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}