#include <iostream>
using namespace std;
// pass col is necessary  and required
void printcol(int arr[][4], int row, int col)
{

    // col wise
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
int main()
{
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
    int ans[3][4];
    // Add 2 matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << ans[i][j] << " ";
        }
    }
    // print all the values in array col wise by function call
    // printcol(arr, 3, 4);
}