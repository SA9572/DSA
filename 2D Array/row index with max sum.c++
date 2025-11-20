// #include <iostream>
// #include <climits>
// using namespace std;
// // pass col is necessary  and required
// void printcol(int arr[][4], int row, int col)
// {

//     // col wise
//     for (int j = 0; j < col; j++)
//     {
//         for (int i = 0; i < row; i++)
//         {
//             cout << arr[i][j] << " ";
//         }
//     }
// }

// void printrowmax(int arr1[][4], int row, int col)
// {
//     int index = -1;
//     int sum = INT_MIN;
//     for (int i = 0; i < row; i++)
//     {
//         int total = 0;
//         for (int j = 0; j < col; j++)
//         {
//             total += arr1[i][j];

//             if (total > sum)
//             {
//                 sum = total;
//                 index = i;
//             }
//         }
//     }

//     cout << index << " ";
// }
// int main()
// {
//     int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     int arr2[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
//     int ans[3][4];
//     // Add 2 matrix
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             ans[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//     }
//     // print all the values in array col wise by function call
//     printrowmax(arr1, 3, 4);
// }

#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

void printcol(int arr[][4], int row, int col)
{
    // col wise
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}

void printrowmax(int arr1[][4], int row, int col)
{
    int index = -1;
    int sum = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr1[i][j];
        }
        // Compare after finishing the row
        if (total > sum)
        {
            sum = total;
            index = i;
        }
    }

    cout << "Row with max sum: " << index << " (sum = " << sum << ")" << endl;
}

int main()
{
    int arr1[3][4] = {1, 2, 3, 4,
                      5, 6, 7, 8,
                      9, 10, 11, 12};
    int arr2[3][4] = {0, 1, 2, 3,
                      4, 5, 6, 7,
                      8, 9, 10, 1};
    int ans[3][4];
    // Add 2 matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Print ans matrix in row-major form
    cout << "ans matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    // print row index with maximum row-sum
    printrowmax(arr2, 3, 4);
    return 0;
}
