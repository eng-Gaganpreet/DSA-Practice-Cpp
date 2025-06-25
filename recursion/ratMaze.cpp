#include<bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>> &mat , int r  , int c ,string path, vector<string> & ans)
{
    int n = mat.size();
    if(r<0 or c<0 or r>=n or c>=n or mat[r][c] == 0 or mat[r][c] == -1)
    {
        return;
    }

    if(r == n-1 and c == n-1)
    {
        ans.push_back(path);
        return;
    }


    mat[r][c] = -1;
    helper(mat, r+1 , c , path+'d', ans);
    helper(mat , r-1 , c , path+'u' , ans);
    helper(mat , r , c-1 , path+'l' , ans);
    helper(mat , r , c+1 , path+'r', ans);
    mat[r][c] = 1;
}

vector<string> findPath(vector<vector<int>> &mat)
{
    vector<string>ans;
    string path ="";
    helper(mat , 0 , 0 , path , ans);

    return ans;
}

int main()
{
    vector<vector<int>> mat = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    vector<string>ans;

    ans = findPath(mat);

    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    return 0;
}