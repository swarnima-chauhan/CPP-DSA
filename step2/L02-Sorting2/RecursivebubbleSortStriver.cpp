#include <bits/stdc++.h>
using namespace std;

void rBubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    int didSwap = 0;
    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
            didSwap++;
        }
    }

    if (didSwap == 0)
        return;

    rBubbleSort(arr, n - 1);
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

    rBubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}