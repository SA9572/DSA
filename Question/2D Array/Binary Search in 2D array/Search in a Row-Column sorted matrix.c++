#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool matSearch(vector<vector<int>> &mat, int x)
    {
        int n = mat.size();    // number of rows
        int m = mat[0].size(); // number of columns

        int i = 0, j = m - 1; // start from top-right

        while (i < n && j >= 0)
        {
            if (mat[i][j] == x)
                return true;
            else if (mat[i][j] < x)
                i++; // move down
            else
                j--; // move left
        }
        return false;
    }
};

int main()
{
    int n, m;
    cout << "Enter number of rows & columns: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    cout << "Enter matrix elements (sorted row & column wise):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int x;
    cout << "Enter target value: ";
    cin >> x;

    Solution obj;
    if (obj.matSearch(mat, x))
        cout << "Element FOUND!\n";
    else
        cout << "Element NOT found!\n";

    return 0;
}

///---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

////WITHOUT CLASS + main()
#include <bits/stdc++.h>
using namespace std;

bool matSearch(vector<vector<int>> &mat, int x)
{
    int n = mat.size();
    int m = mat[0].size();

    int i = 0, j = m - 1;

    while (i < n && j >= 0)
    {
        if (mat[i][j] == x)
            return true;
        else if (mat[i][j] < x)
            i++;
        else
            j--;
    }
    return false;
}

int main()
{
    int n, m;
    cout << "Enter number of rows & columns: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    cout << "Enter matrix values:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int x;
    cout << "Enter target value: ";
    cin >> x;

    if (matSearch(mat, x))
        cout << "Element FOUND!\n";
    else
        cout << "Element NOT found!\n";
}
