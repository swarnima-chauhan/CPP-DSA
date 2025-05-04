#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int h[13] = {0};
    for (int i = 0; i < n; i++)
    {
        h[arr[i]]++;
    }

    cout << "Enter the number of queries: ";
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int qu;
        cout << "Enter query : ";
        cin >> qu;
        cout << qu << " appears " << h[qu] << " times\n";
    }

    return 0;
}