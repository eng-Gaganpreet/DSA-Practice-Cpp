#include<bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(vector<int> &arr)
{
    int size = arr.size();
    int k=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == 0 and arr[k]!=0)
            k=i;
        else if (arr[i]!=0 and arr[k]==0)
        {
            swap(arr[k],arr[i]);
            k=i;  
        }
    }
}

int main()
{
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    moveZeroesToEnd(arr);

    for(int i=0 ; i< size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}