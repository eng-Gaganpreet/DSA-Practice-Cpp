#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] >= nums[0])
            s = mid + 1;
        else
            e = mid;
    }

    int pivot = s;
    s = 0;
    e = nums.size() - 1;

    if (target >= nums[pivot] and target <= nums[e])
        s = pivot;
    else
        e = pivot - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (target == nums[mid])
        {

            return mid;
        }
        else if (target < nums[mid])
        {

            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {7, 9, 10, 2, 5, 7, 8};
    int target;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums [i] << " ";
    }
    cout << endl;
    cout << "enter the target you want to search  ";
    cin >> target;

    int index = search(nums, target);

    cout << "the index of the target element is : " << index << endl;

    return 0;
}