#include <iostream>
using namespace std;

// Parameterised Way

// void sum(int i, int s)
// {
//     if (i < 1)
//     {
//         cout << s << endl;
//         return;
//     }
//     sum(i - 1, s + i);
// }

// int main()
// {
//     int n;
//     cout << "Enter number : ";
//     cin >> n;
//     cout << "Sum is : ";
//     sum(n, 0);
// }

// Functional Way
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter number :  ";
    cin >> n;
    cout << "Sum of first " << n << " numbers is : " << sum(n);

    return 0;
}