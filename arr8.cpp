#include <bits/stdc++.h>

using namespace std;

bool helper(vector<vector<int>> grid)

{

    int n = grid.size();

    int m = grid[0].size();

    for (int i = 0; i < n; i++)

    {

        if (grid[i][i] == 0)

        {

            return false;
        }

        if (grid[i][n - i - 1] == 0)

        {

            return false;
        }

        grid[i][i] = -1;

        grid[i][n - i - 1] = -1;
    }

    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < n; j++)

        {

            if (grid[i][j] != -1 && grid[i][j] != 0)

            {

                return false;
            }
        }
    }

    return true;
}
int main()
{

    int r;

    int c;

    cout << "Enter the row and column size : ";

    cin >> r >> c;

    vector<vector<int>> arr(r, vector<int>(c));

    cout << "Enter the matrix elements : " << endl;

    for (int i = 0; i < r; i++)

    {

        for (int j = 0; j < c; j++)

        {

            cin >> arr[i][j];
        }
    }

    int val = helper(arr);

    if (val)

    {

        cout << "true";
    }
    else
    {

        cout << "false";
    }
}