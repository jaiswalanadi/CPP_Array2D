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

    int val = INT_MIN;

    for (int i = 0; i < m; i++)

    {

        for (int j = 0; j < n; j++)

        {

            if (mat[i][j] > val)

            {

                val = mat[i][j];
            }
        }
    }

    cout << val;

    return 0;
}