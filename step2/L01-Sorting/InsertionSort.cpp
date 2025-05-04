#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];
    cout << "Enter Array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    InsertionSort(arr, size);

    cout << "Sorted array :\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}