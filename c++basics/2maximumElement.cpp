#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int ans=-1;
    cout<<"enter the array elements : "<<endl;
    for(int i=0 ;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<4;i++)
    {
        if(arr[i]>=arr[i+1] and arr[i]>ans)
            ans = arr[i];
        else    
            ans = arr[i+1];
    }
    cout<<"the maximum element is : " <<ans ;
    
}