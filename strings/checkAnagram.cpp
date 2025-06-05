#include <bits/stdc++.h>

using namespace std;

bool checkAnagram(string str1, string str2)
{
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1.length() != str2.length())
    {
        return false;
    }

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1;
    cout << "enter the string 1 : ";
    getline(cin, str1);

    string str2;
    cout << "enter the string 2 : ";
    getline(cin, str2);

    cout<<"string 1 is : " << str1<<endl;
    cout<<"string 2 is : " << str2<<endl;
    
    if (checkAnagram(str1, str2))
    {
        cout<<"The string is anagram .."<<endl;
    }
    else
        cout<<"The string is not anagram.."<<endl;

    return 0;
}