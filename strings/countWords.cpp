#include <bits/stdc++.h>
#include <string>
using namespace std;

int countWords(string str)
{
    int size = str.size();
    vector<string> words;
    string temp = "";
    
    if (str.size() == 0 or str == " ")
        return 0;

    for (int i = 0; i < size; i++)
    {
        if (str[i] == ' ')
        {
            words.push_back(temp);
            temp = " ";
        }
        else
        {
            temp += str[i];
        }
    }
    
    int count = 1;//because after the last word there will be no space so,
                    //it will never be pushback into <words> array and hence 1 is added
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i].size() != 0 and words[i] != " ")
            count++;
    }

    return count;
}

int main()
{
    string str;
    cout << "enter the string : ";
    getline(cin, str);

    int count = countWords(str);
    cout << "the number of words in the string are : " << count;

    return 0;
}