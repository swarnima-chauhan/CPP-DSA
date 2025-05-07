#include <bits/stdc++.h>
using namespace std;
bool sort(vector<int> &arr, int low, int high)
{
    bool didSwap = false;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            didSwap = true;
        }
    }
    return didSwap;
}

void rBubbleSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        bool didSwap = sort(arr, low, high);
        if (!didSwap)
            return;
        rBubbleSort(arr, low, high - 1);
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

    rBubbleSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}