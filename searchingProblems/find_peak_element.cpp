#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] > nums[mid + 1])
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5 ,6,9};
    int peak = findPeakElement(nums);
    cout << "the peak element is at index : " << peak << endl;
    return 0;
}