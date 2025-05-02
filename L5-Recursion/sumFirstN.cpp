#include <iostream>
using namespace std;

void sum(int i, int s)
{
    if (i < 1)
    {
        cout << s << endl;
        return;
    }
    sum(i - 1, s + i);
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << "Sum is : ";
    sum(n, 0);
}