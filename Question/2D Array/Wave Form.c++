#include <iostream>
#include <algorithm>
using namespace std;

void wave(int arr[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    // Create 2D Array
    int arr1[3][4] = {12, 45, 21, 65, 98, 74, 56, 32, 45, 10, 54, 60};

    int ans[3][4];

    wave(arr1, 3, 4);
}