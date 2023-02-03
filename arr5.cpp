#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &s)
{
    vector<vector<int>> ans;
    int j = 0;
    ans.push_back(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (ans[j][1] >= s[i][0])
        {
            ans[j][1] = max(ans[j][1], s[i][1]);
        }
        else
        {
            j++;
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> mat = {{1, 4}, {2, 3}, {5, 8}, {6, 9}};
    vector<vector<int>> ans = merge(mat);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}