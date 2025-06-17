#include <bits/stdc++.h>
using namespace std;

int binarySearchIterative(vector<int> arr, int target)
{
    int size = arr.size();

    int start = 0;
    int end = size - 1;
    int mid;

    while(start<=end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1,4,10,3,7,9};
    int target;//element to be searched

    sort(arr.begin(), arr.end());
    cout<<"your array is defined below : "<<endl;

    for(int i=0; i<arr.size() ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the value you want to search : ";
    cin>>target ;

    int index = binarySearchIterative(arr,target);

    if(index == -1)
        cout<<"The element is not present in the array ..."<<endl;
    else
        cout<<"The element " << target << " is present at index : " <<index<<endl;
    return 0;
} 