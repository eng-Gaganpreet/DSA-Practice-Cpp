#include <bits/stdc++.h>
using namespace std;

void ascendingBubbleSort(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (not flag)
            break;
    }
}

void descedingBubbleSort1(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                flag = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (not flag)
            break;
    }
}
void descedingBubbleSort2(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = size - 1; j >= 0 + i; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                flag = true;
                swap(arr[j], arr[j - 1]);
            }
        }
        if (not flag)
            break;
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

    ascendingBubbleSort(arr);
    print(arr);

    descedingBubbleSort1(arr);

    print(arr);
    return 0;
}