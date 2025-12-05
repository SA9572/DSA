#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {

        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++)
        {
            int start = 0, end = n - 1;
            while (start < end)
            {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};

int main()
{
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    obj.rotate(matrix);

    cout << "\nMatrix after 90-degree rotation:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
