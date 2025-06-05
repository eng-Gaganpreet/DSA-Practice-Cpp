#include<bits/stdc++.h>
#include<string>

using namespace std;

void countVowelsConsonants(string str)
{
    int i=0;
    int vowelCount = 0;
    int consonantCount = 0;
    string tempstr;
    transform(str.begin(),str.end(),tempstr.begin(),::tolower);
    for(;i<str.length();i++)
    {
        if(tempstr[i] == 'a' or tempstr[i] == 'e' or tempstr[i] == 'i' or tempstr[i] == 'o' or tempstr[i] == 'u')
        {
            vowelCount++;
        }
        else
            consonantCount++;
    }
    cout<<"the vowels count in the string is : "<<vowelCount<<endl;
    cout<<"the consonant count in the string is : "<<consonantCount;
}

int main()
{
    string str;
    cout << "enter the string : ";
    getline(cin, str);

    countVowelsConsonants(str);

    return 0;
}