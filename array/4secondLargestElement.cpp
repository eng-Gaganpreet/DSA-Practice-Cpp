#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int>arr,int x)
{
    int size = arr.size();
    
    sort(arr.begin(),arr.end());

    return arr[size-x];
    
}
int main()
{
    int size;
    cout<<"enter the size of array : ";
    cin>>size;
    vector<int>arr(size);

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int secondLargestElement = secondLargest(arr,2);
    cout<<"the second largest element is : "<<secondLargestElement;
    return 0;
} 