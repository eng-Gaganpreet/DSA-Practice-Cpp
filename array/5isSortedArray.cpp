#include <bits/stdc++.h>
using namespace std;

bool isSortedArray(vector<int> arr)
{
    int size = arr.size() - 1;
    for (int i = 1; i < size ; i++)
    {
        if(!((arr[i-1] >= arr[i] and arr[i] >=arr[i+1]) or (arr[i-1] <= arr[i] and arr[i] <= arr[i+1])) )
            return false;
    }
    return true;
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

    if(isSortedArray(arr))
        cout<<"the array is sorted....";
    else 
        cout<<"the array is not sorted.....";

    return 0;
}
