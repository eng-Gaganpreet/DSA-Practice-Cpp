#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{

    int n;
    cout << "Enter the value for which you want the factorail of the number  : ";
    cin >> n;

    int fac = factorial(n);

    cout << "The factorial of " << n << " is : " << fac << endl;

    return 0;
}