#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
    int n;
    cout << "Enter the value for which you want the factorail of the number  : ";
    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        int fibo = fibonacci(i);
        cout<<fibo<<" ";
    }

    return 0;
}