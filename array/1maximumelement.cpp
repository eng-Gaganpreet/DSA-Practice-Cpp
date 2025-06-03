#include <iostream>
#include<algorithm>
using namespace std;

int findMaximum(int arr[],int x)
{
    int max = INT32_MIN;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    cout << "the maximum element in the array is : " << max<<endl;
}

int findMinimum(int arr[],int x)
{
    int min = INT32_MAX;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    cout << "the minimum element in the array is : " << min<<endl;
}

int main()
{
    int x;
    cout << "enter the size of array you want to create : ";
    cin >> x;
    int arr[x];
    if (x == 0)
        cout << "the array is empty...";
    else
    {
        for (int i = 0; i < x; i++)
        {
            cout << "enter array element " << i + 1 << " : ";
            cin >> arr[i];
        }
        findMaximum(arr, x);
        findMinimum(arr, x);
    }
    return 0;
}