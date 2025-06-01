#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
    cout<<"After swapping"<<endl;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;

}

int main()
{
    int a,b;
    cout<<"enter the value of A and B respectively: ";
    cin>>a>>b;
    cout<<"Before swapping : "<<endl;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;

    swap(a,b);

    return 0;
}