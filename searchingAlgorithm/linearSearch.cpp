#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr , int target )
{
    int size = arr.size();
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1,4,10,3,7,9};
    int target;//element to be searched

    cout<<"Enter the value you want to search : ";
    cin>>target ;

    int index = linearSearch(arr,target);

    if(index == -1)
        cout<<"the element is not present in the array ..."<<endl;
    else
        cout<<"The element " << target << " is present at index : " <<index<<endl;
        
    return 0;
}