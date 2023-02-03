#include <iostream>
#include <vector>
using namespace std;
bool check(vector<vector<int>> &mat)
{
    int r = mat.size();
    int c = mat[0].size();
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            if (mat[i][j] != mat[i - 1][j - 1])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    vector<vector<int>> mat = {{9, 8, 7, 6}, {5, 9, 8, 7}, {1, 5, 9, 8}};
    if (check(mat))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}