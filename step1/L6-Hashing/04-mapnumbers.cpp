#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;

    cout << "Enter the array : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    cout << "Enter number of queries : ";
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int qu;
        cout << "Enter query : ";
        cin >> qu;
        cout << qu << " appears " << mpp[qu] << " times\n";
    }
}
