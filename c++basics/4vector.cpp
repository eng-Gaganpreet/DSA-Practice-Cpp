#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void printSorted(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    int size = arr.size()-1;
    cout<<endl<<"printing vector array in ascending order : ";
    for(int i = 0; i<=size ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<endl<<"printing in descending order: ";

    for(int i = size ;i >= 0 ;i--)
    {
        cout<<arr[i]<<" ";
    }
}

int countEven(vector<int>&arr)
{
    int count = 0;
    int size = arr.size();
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i]%2==0)
            count++;
    }
    return count;
}

int main()
{
    int x;
    cout<<"enter the size of vector array : ";
    cin>>x;
    vector<int> arr(x);
    cout<<"enter the array elements : ";
    for(int i =0; i< x ; i++)
        cin>> arr[i];

    // print(arr);

    cout<<countEven(arr);
    return 0;
}