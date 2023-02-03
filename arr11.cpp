#include <iostream>
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
    cout << endl;
    int ans = 0;
    int sumsofar = 0;

    for (int i = 0; i <= m - 3; i++)
    {
        for (int j = 0; j <= n - 3; j++)
        {
            sumsofar = 0;
            for (int k = j; k < j + 3; k++)
            {
                sumsofar = sumsofar + mat[i][k];     // this adds the first row of hourglass shape
                sumsofar = sumsofar + mat[i + 2][k]; // this adds the third row of hourglass shape
            }
            sumsofar += mat[i + 1][j + 1]; // this adds the mid element of the hourglass
            if (ans < sumsofar)
            {
                ans = sumsofar; // this stores the maximum sum hourglass
            }
        }
    }
    cout << ans;
}