#include <bits/stdc++.h>
using namespace std;

void selectionSortAscending(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        swap(arr[i], arr[min_index]);
    }
}

void selectionSortDescending(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 0; i < size - 1; i++)
    {
        int max_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[max_index])
                max_index = j;
        }
        swap(arr[i], arr[max_index]);
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

    selectionSortDescending (arr);
    cout << "after sorting : " << endl;
    print(arr);

    return 0;
}