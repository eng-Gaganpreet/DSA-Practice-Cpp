#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &weights, int days, int mid)
{
    int n = weights.size();
    int sum = 0;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (sum + weights[i] <= mid)
        {
            sum += weights[i];
        }
        else
        {
            count++;
            if (count > days or weights[i] > mid)
            {
                return false;
            }
            sum = weights[i];
        }
    }
    return true;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int ans = -1;
    int start = 0;
    int sum = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        sum += weights[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(weights, days, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> weights = {3, 4, 5, 6, 1, 3, 4};
    int days = 4;

    int minimumWeight = shipWithinDays(weights, days);

    cout << "the minimum weight is : " << minimumWeight;

    return 0;
}