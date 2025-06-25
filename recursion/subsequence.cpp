#include <bits/stdc++.h>
using namespace std;

void subsequences(int index, vector<int> &ds, int arr[], int n)
{
    if (index == n)
    {
        for (auto i : ds)
        {
            cout << i << " ";
        }
        cout << endl;
        if (ds.size() == 0)
        {
            cout << "{ }";
        }

        return;
    }

    ds.push_back(arr[index]);
    subsequences(index + 1, ds, arr, n);
    ds.pop_back();
    subsequences(index + 1, ds, arr, n);
}

int main()
{

    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    subsequences(0, ds, arr, n);
    return 0;
}