#include<bits/stdc++.h>
using namespace std;

int digitSum(int n)
{
    if(n>=0 and n<=9)
        return n;

    int digit = n%10;
    return digit + digitSum(n/10);
}

int main()
{
    int n;
    cout<<"Enter the value : " ;
    cin>>n;

    int sum = digitSum(n);

    cout<<"The sum of the digits is : " << sum <<endl;

    return 0;
}