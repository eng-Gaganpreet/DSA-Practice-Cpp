#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n)
{
    //column check
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
            return false;
    }
    //check upper left diagonal
    for (int i = row, j = col; i >= 0 and j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    // check upper right diagonal
    for (int i = row , j = col; i >= 0 and j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    return true;
}

void nQueen(vector<string> &board, int row, int n, vector<vector<string>> &ans)
{
    if (row == n)
    {
        ans.push_back(board);
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, row, j, n))
        {
            board[row][j] = 'Q';
            nQueen(board, row + 1, n, ans);
            board[row][j] = '.';
        }
    }
}

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));

    nQueen(board, 0, n, ans);

   for (auto solution : ans)
    {
        for (auto row : solution)
        {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}