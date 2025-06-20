#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &arr, int low, int high, int target)
{
    int mid;
    int ans = -1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] <= target)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurence(vector<int> &arr, int low, int high, int target)
{
    int mid;
    int ans = -1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 4, 5, 6, 7, 7, 8};
    int target;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "enter the target for first and last occurence : " << endl;
    cin >> target;

    int first_occurence = firstOccurence(arr, 0, arr.size() - 1, target);
    int last_occurence = lastOccurence(arr, 0, arr.size() - 1, target);

    cout << "the first occurence is : " << first_occurence << endl
         << "the last occurence is : " << last_occurence << endl;

    return 0;
}