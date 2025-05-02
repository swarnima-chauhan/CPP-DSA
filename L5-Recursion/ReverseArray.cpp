#include <iostream>
using namespace std;
void reverseArr(int i, int arr[], int size)
{
    if (i >= size / 2)
    {
        return;
    }
    swap(arr[i], arr[size - i - 1]);
    reverseArr(i + 1, arr, size);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    reverseArr(0, arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}