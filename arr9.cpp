#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int mat[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int sum = INT_MIN;
    int row = -1;
    int temp = -1;
    for (int i = 0; i < m; i++) // loop to convert the matrix to prefix sum matrix
    {
        for (int j = 1; j < n; j++)
        {
            mat[i][j] = mat[i][j] + mat[i][j - 1];
        }
        if (mat[i][n - 1] > temp)
        {
            temp = mat[i][n - 1];
            row = i;
        }
    }
    cout << row + 1;
}