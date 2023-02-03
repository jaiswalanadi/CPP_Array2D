#include <iostream>
using namespace std;
int main()
{
    int r;
    int c;
    cout << "Enter the row and column size : ";
    cin >> r >> c;
    int arr[r][c];
    cout << "Enter the matrix elements : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int temp[r][c];
    temp[0][0] = arr[0][0];
    for (int i = 1; i < r; i++)
    {
        temp[i][0] = temp[i - 1][0] + arr[i][0];
    }
    for (int j = 1; j < c; j++)
    {
        temp[0][j] = temp[0][j - 1] + arr[0][j];
    }
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            temp[i][j] = temp[i - 1][j] + temp[i][j - 1] - temp[i - 1][j - 1] + arr[i][j];
        }
    }
    // printing the prefix sum matrix
    cout << "The prefix matrix is : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}