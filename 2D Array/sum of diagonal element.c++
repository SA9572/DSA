#include <iostream>
#include <climits> // for INT_MIN
using namespace std;
void printsumdig(int matrix[][3], int r, int c)
{
    int first = 0;
    int sec = 0;
    // first diagonal
    int i = 0;
    while (i < r)
    {
        first += matrix[i][i];
        i++;
    }

    // second diagonal

    i = 0;

    int j = c - 1;
    while (j >= 0)
    {
        sec += matrix[i][j];
        i++, j--;
    }

    cout << first << " " << sec << " ";
}
int main()
{

    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printsumdig(matrix, 3, 3);
}
