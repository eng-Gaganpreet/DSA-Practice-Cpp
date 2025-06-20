#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int start_row = 0;
    int start_col = 0;
    int end_col = matrix[0].size() - 1;
    int end_row = matrix.size() - 1;

    while (start_row < end_row)
    {
        int row_mid = (start_row + end_row) / 2;
        if (target == matrix[row_mid][end_col])
        {
            return true;
        }
        else if (target < matrix[row_mid][end_col])
        {
            end_row = row_mid;
        }
        else
        {
            start_row = row_mid + 1;
        }
    }

    while (start_col <= end_col)
    {
        int col_mid = (start_col + end_col) / 2;
        if (target == matrix[end_row][col_mid])
        {
            return true;
        }
        else if (target < matrix[end_row][col_mid])
        {
            end_col = col_mid - 1;
        }
        else
        {
            start_col = col_mid + 1;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {4, 5, 6, 7},
        {8, 9, 10, 11},
        {12, 13, 14, 15}};

    int target;
    cout << "enter the target value you want to search for : ";
    cin >> target;
    if (searchMatrix(matrix, target))
        cout << "The element is present in the matrix .... " << endl;
    else
        cout << "The element is not present in the matrix .... " << endl;

    return 0;
}