#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(vector<int> arr, int start, int end, int target)
{
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (target > arr[mid])
    {
        return binarySearchRecursive(arr, mid + 1, end, target);
    }
    else
    {
        return binarySearchRecursive(arr, start, mid - 1, target);
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 4, 10, 3, 7, 9};
    int target; // element to be searched

    sort(arr.begin(), arr.end());
    cout << "your array is defined below : " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the value you want to search : ";
    cin >> target;

    int index = binarySearchRecursive(arr, 0, arr.size() - 1, target);

    if (index == -1)
        cout << "The element is not present in the array ..." << endl;
    else
        cout << "The element " << target << " is present at index : " << index << endl;
    return 0;
}