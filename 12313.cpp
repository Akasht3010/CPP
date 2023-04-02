#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter length of string: ";
    cin >> n;
    char s[n];
    cout << "Enter a string of numbers: ";
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9')
        {
            cout << s[i] << '-';
        }
        else
        {
            cout << s[i];
        }
    }
}
