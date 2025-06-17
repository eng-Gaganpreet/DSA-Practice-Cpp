#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int x;
    cout << "enter the size of the array : ";
    cin >> x;
    vector<int> arr(x);

    for (int i = 0; i < x; i++)
    {
        cout << "enter the array element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "before sorting : " << endl;
    print(arr);

    insertionSort(arr);

    cout << "after sorting : " << endl;
    print(arr);

    return 0;
}
