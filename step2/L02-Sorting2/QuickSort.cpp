#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int pivot(vector<int> &arr, int low, int high)
{
    int pv = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pv && i <= high)
        {
            i++;
        }
        while (arr[j] > pv && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = pivot(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        arr.push_back(j);
    }

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}