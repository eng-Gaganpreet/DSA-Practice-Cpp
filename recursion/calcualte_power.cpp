#include<bits/stdc++.h>
using namespace std;

int calculatePower(int n,int x)
{
    if(x<=0)
        return 1;
    
    return n*(calculatePower(n,x-1));

}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int x;
    cout<<"Enter the power : ";
    cin>>x;

    int power = calculatePower(n,x);
    cout<< n << " ^ " << x << " = " << power << endl;
    return 0;
}