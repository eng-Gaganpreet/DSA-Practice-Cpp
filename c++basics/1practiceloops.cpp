#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number for which you want the table for : ";
    cin>>x;
    cout<<"printing table using FOR loop ->  "<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<< x << "*" << i << "=" <<x*i<<endl;
    }
    int i=1;
    cout<<endl<<"printing table using WHILE loop ->  "<<endl;
    while(i<=10)
    {
        cout<< x << "*" << i << "=" <<x*i<<endl;
        i++;
    }
    return 0;
}