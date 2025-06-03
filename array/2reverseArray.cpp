#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int size = arr.size();
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
            swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << endl;
    cout << "Reversed array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int x;
    cout << "enter the size of array you want to create : ";
    cin >> x;
    vector<int> arr(x);
    if (x == 0)
        cout << "the array is empty...";
    else
    {
        for (int i = 0; i < x; i++)
        {
            cout << "enter array element " << i + 1 << " : ";
            cin >> arr[i];
        }
        reverseArray(arr);
    }
    return 0;
}