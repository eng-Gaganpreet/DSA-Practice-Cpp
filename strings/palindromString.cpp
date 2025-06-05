#include <bits/stdc++.h>
#include <string>
using namespace std;

bool palindromString(string &str)
{
    int i = 0;                // pionter to the start of the string
    int j = str.length() - 1; // pointer to the last character of the string

    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    string str;
    cout << "enter the string : ";
    getline(cin, str);

    if (palindromString(str))
        cout << "the string is palindrom...";
    else
        cout << "the string is not palindrom...";

    return 0;
}