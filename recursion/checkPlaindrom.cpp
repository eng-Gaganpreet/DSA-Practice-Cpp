#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(int num , int *temp)
{
    if(num >= 0 and num <=9)
    {
        int lastDigitOfTemp = (*temp) % 10;
        (*temp) /= 10;
        return (num == lastDigitOfTemp);

    }
    bool result = isPalindrom(num/10 , temp) and num%10 == (*temp) %10;
    (*temp)/=10;
         
    return result;
}

int main()
{
    int n;
    cout<<"enter the number to check for palindrom : ";
    cin>>n;
    int temp = n;
    int *temporary = &temp;
    
    if(isPalindrom(n, temporary))
        cout<<"The number is Palindrom ..." ;
    else
        cout<<"The number is not Palindrom ...";

    return 0;
}