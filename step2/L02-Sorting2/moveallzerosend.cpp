#include <iostream>
#include <vector>
using namespace std;

void pushAllzeroEnd(vector<int> &arr, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }

    for (int i = temp.size(); i < n; i++)
    {
        arr[i] = 0;
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

    pushAllzeroEnd(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
