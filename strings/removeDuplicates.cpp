#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string &str)
{
    int size = str.size();
    int index = 0;
    for(int i=0; i<size ;i++)
    {
        int j;
        for(j=0;j<i;j++)
        {
            if(str[i] == str[j])
            {
                break;
            }
        }
        if(j == i)
            str[index++] = str[i];
    }
    str.resize(index);
    return str;
}

int main()
{
    string str;
    getline(cin,str);
    cout<<"your string is: "<<str<<endl;
    
    string newstr = removeDuplicates(str);

    cout<<"after removing duplicates your strings is : ";
    cout<<newstr;
    return 0;
}