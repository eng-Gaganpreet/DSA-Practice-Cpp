#include<bits/stdc++.h>
#include<string>
using namespace std;

void reverseString(string &str)
{
    int i=0; //pionter to the start of the string 
    int j=str.length() - 1; //pointer to the last character of the string 

    while(i<j)
    {
        if(str[i] != str[j])
        {
            swap(str[i],str[j]);
            i++;
            j--;
        }
    }
}


int main()
{
    string str;
    cout<<"enter the string : ";
    getline(cin,str);

    reverseString(str);

    cout<<str<<endl;
    return 0;
}