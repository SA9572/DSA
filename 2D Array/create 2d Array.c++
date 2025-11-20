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
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // print all the value in array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    // print all the values in array col wise by function call
    printcol(arr, 3, 4);
}