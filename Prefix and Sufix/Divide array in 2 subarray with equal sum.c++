/// Time complixity:- O(n^2)
// Space Complixity :- O(2n)

#include <iostream>
using namespace std;

int Divide(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++)
        {
            sum1 += arr[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            sum2 += arr[j];
        }
        if (sum1 == sum2)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (Divide(arr, n))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}

// time complixity:- O(n)

