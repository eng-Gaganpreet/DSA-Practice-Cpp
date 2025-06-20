#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (target == nums[mid])
        {
            return mid;
            break;
        }
        else if (target < nums[mid])
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return i;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 9};
    int target;
    cout << "enter the target you want to insert : ";
    cin >> target;
    int insertPos = searchInsert(nums, target);
    cout << "the insertPos element is at index : " << insertPos << endl;
    return 0;
}