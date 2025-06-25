#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str)
{
    if(str.length() == 1)
        return str;
    
    char ch = str[0];
    str.erase(str.begin());

    return reverseString(str)+ch;
    
    
}

int main()
{

    string str ;
    cout<<"enter the string you want to reverse : ";
    getline(cin , str);

    cout<<"before reversing the string : "<<str<<" ";
    str = reverseString(str);
    cout<<"after reversing the string : "<<str<<" ";
    
    return 0;
}