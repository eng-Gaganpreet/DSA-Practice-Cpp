#include <bits/stdc++.h>
using namespace std;

int PossibleSpeed(vector<int> &piles, int h, int mid)
{
    int speed = 0;
    for (int i = 0; i < piles.size() ; i++)
    {
        if (piles[i] <= mid)
        {
            speed++;
        }
        else
        {
            speed += (piles[i] + mid - 1) / mid;
        }
    }
    return speed;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    sort(piles.begin(), piles.end());

    int size = piles.size() - 1;
    int s = 0;
    int e = piles[size];
    int mid = s + (e - s) / 2;
    int Speed = 0;

    int ans = -1;
    while (s <= e)
    {
        Speed = PossibleSpeed(piles, h, mid);
        if (Speed <= h)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> piles = {3,6,7,11};
    int h = 8;
    cout<<"hello"<<endl;
    int speed = minEatingSpeed(piles,h);
    cout<<"hello"<<endl;
    cout<<"the ans is : "<<speed;

    return 0;
}