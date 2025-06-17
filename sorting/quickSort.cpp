#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[end];  // choose the last element as pivot
    int position = start;

    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[position]);
            position++;
        }
    }
    swap(arr[position], arr[end]); // place pivot in correct position
    return position;
}

void quickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;

    int pivot = partition(arr, start, end);

    quickSort(arr, start, pivot - 1);  // left
    quickSort(arr, pivot + 1, end);    // right
}

void printVector(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> arr6 = {2, 6, 1, 0, 7};

    quickSort(arr6, 0, arr6.size() - 1);
    printVector(arr6);
    
    return 0;
}
