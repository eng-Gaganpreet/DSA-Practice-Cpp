#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<vector<int>> &board, int row, int col, int digit)
{
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == digit)
            return false;
    }

    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == digit)
            return false;
    }

    int scol, srow;

    scol = (col / 3) * 3;
    srow = (row / 3) * 3;

    int ecol = scol + 3, erow = srow + 3;

    for (int i = srow; i < erow; i++)
    {
        for (int j = scol; j < ecol; j++)
        {
            if (board[i][j] == digit)
                return false;
        }
    }

    return true;
}

bool sudokuSolver(vector<vector<int>> &board, int row, int col)
{
    int digit;

    if (row == 9)
        return true;

    int nextrow = row;
    int nextcol = col + 1;
    if (nextcol == 9)
    {
        nextrow = row + 1;
        nextcol = 0;
    }

    if (board[row][col] != 0)
    {
        return sudokuSolver(board, nextrow, nextcol);
    }

    for (digit = 1; digit <= 9; digit++)
    {
        if (isPossible(board, row, col, digit))
        {
            board[row][col] = digit;

            if (sudokuSolver(board, nextrow, nextcol))
            {
                return true;
            }

            board[row][col] = '.';
        }
    }
    return false;
}

void printBoard(const vector<vector<int>> &board)
{
    for (const auto &row : board)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    if (sudokuSolver(board, 0, 0))
    {        
        cout << "the board is solved..." << endl;
        printBoard(board);
    }    
    else
        cout << "the board cannot be soved..." << endl;

    return 0;
}