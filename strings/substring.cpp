#include<bits/stdc++.h>
using namespace std;

void substrings(string str , int index,string result,vector<string> &li)
{
    if(index == str.length())
    {
        li.push_back(result);
        return;
    }

    substrings(str,index+1,result+str[index],li);
    substrings(str,index+1,result,li);
    
}


int main()
{
    string str;
    getline(cin,str);
    vector<string>result;

    substrings(str ,0,"",result);

    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}