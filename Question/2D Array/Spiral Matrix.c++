#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size(), col = matrix[0].size();

        int top = 0, bottom = row - 1, left = 0, right = col - 1;

        while (left <= right && top <= bottom)
        {

            // print top row
            for (int j = left; j <= right; j++)
                ans.push_back(matrix[top][j]);
            top++;

            // print right column
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            // print bottom row
            if (top <= bottom)
            {
                for (int j = right; j >= left; j--)
                    ans.push_back(matrix[bottom][j]);
                bottom--;
            }

            // print left column
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }

        return ans;
    }
};

int main()
{
    int n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    vector<int> result = obj.spiralOrder(matrix);

    cout << "Spiral order: ";
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
