#include <bits/stdc++.h>
using namespace std;

void rInsertionSort(vector<int> &arr, int i, int n)
{
    if (i == n)
        return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    rInsertionSort(arr, i + 1, n);
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

    rInsertionSort(arr, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}