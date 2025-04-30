#include <iostream>
using namespace std;

void print1toNb(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    print1toNb(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    print1toNb(n, n);
}