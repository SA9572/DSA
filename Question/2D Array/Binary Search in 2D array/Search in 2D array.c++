#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int N = matrix.size(), M = matrix[0].size();
        int start = 0, end = N * M - 1, mid;
        int row_index, col_index;

        while (start <= end)
        {
            mid = (start + end) / 2;
            row_index = mid / M;
            col_index = mid % M;

            if (matrix[row_index][col_index] == target)
                return true;
            else if (matrix[row_index][col_index] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return false;
    }
};

int main()
{
    int n, m, target;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter matrix elements (sorted row-wise):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter target value: ";
    cin >> target;

    Solution obj;
    bool found = obj.searchMatrix(matrix, target);

    if (found)
        cout << "Target found!\n";
    else
        cout << "Target NOT found!\n";

    return 0;
}

/// -------------------------------------------------------------------------------------------------------

// WITHOUT CLASS (normal function + main)

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int N = matrix.size(), M = matrix[0].size();
    int start = 0, end = N * M - 1, mid;
    int row_index, col_index;

    while (start <= end)
    {
        mid = (start + end) / 2;
        row_index = mid / M;
        col_index = mid % M;

        if (matrix[row_index][col_index] == target)
            return true;
        else if (matrix[row_index][col_index] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}

int main()
{
    int n, m, target;
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

    cout << "Enter target value: ";
    cin >> target;

    if (searchMatrix(matrix, target))
        cout << "Target found!\n";
    else
        cout << "Target NOT found!\n";

    return 0;
}
