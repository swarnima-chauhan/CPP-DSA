#include <iostream>
using namespace std;

void printNto1(int i, int n)
{
    if (n < i)
    {
        return;
    }
    cout << n << endl;
    printNto1(1, n - 1);
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    printNto1(1, n);
}
