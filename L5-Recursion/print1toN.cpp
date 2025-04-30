#include <iostream>
using namespace std;
int i = 1;
void print1toN(int n)
{
    cout << i;
    if (i == n)
    {
        return;
    }
    i++;
    print1toN(n);
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    print1toN(n);
}