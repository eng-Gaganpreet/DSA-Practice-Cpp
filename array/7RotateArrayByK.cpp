#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int pos)
{
    vector<int> temp;
    int k = 0;
    int size = arr.size();
    int pivot = size - pos;
    for (int i = pivot; i < size; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int j = 0; j < pivot; j++)
    {
        temp.push_back(arr[j]);
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
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

    rotateArray(arr, 2);
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}