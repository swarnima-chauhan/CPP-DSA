#include <iostream>
using namespace std;
int count = 0;
void printName(string s)
{
    if (count == 5)
    {
        return;
    }
    cout << s << endl;
    count++;
    printName(s);
}

int main()
{
    string s;
    cout << "Enter your name :";
    getline(cin, s);
    printName(s);
}
