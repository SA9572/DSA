#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {

        int n = matrix.size();

        // transpose only upper triangle with lower
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        return matrix;
    }
};

int main()
{
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter matrix values:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    vector<vector<int>> result = obj.transpose(matrix);

    cout << "\nTranspose of Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
