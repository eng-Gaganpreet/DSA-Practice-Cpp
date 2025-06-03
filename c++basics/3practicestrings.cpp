#include <iostream>
#include<string>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    if (n == 0)
        return ans;
    else
        for (int i = 1; i <= n; i++)
        {
            ans = ans * i;
        }
    return ans;
}

bool isPrime(int n)
{
    if (n <= 1)
    {
       return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }

    return true;
}

bool isPalindromString(string str)
{
    int length = str.length();
    int n = length / 2;
    char ch;
    if(length == 1)
        return true;

    for(int i =0 ; i< n;i++)
    {
        ch = str[i];
        if(str[length-i-1] != ch)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number ;
    cout<<"enter the number you want to calculate the factorial: ";
    cin>>number;
    cout<<"the factorial of the number "<< number <<" is "<<factorial(number)<<endl;

    // if (isPrime(0))
    //     cout << "it is prime...."<<enld;
    // else
    //     cout << "it is not prime...."<<endl;

    // string str;
    // getline(cin,str);
    // if(isPalindromString(str))
    //     cout<<"the string is palindrom "<<endl;
    // else 
    //     cout<<"the string is not palindrom "<<endl;
    // return 0;

    

}