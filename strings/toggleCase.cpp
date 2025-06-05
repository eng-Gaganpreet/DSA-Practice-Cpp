#include <bits/stdc++.h>
#include <string>
using namespace std;

void toggleCase(string &str)
{
    char ch ;
    for (int i = 0; i < str.size(); i++)
    {
        if (islower(str[i]))
        {
            ch = toupper(str[i]);
            str[i] = ch;
        }
        else
        {
            ch = tolower(str[i]);
            str[i] = ch;
        }
    }
}

int main()
{
    string str;
    cout << "enter the string : ";
    getline(cin, str);

    toggleCase(str);

    cout << str;
    return 0;
}