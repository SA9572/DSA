#include <iostream>
using namespace std;

int main()
{
    int arr[10000];
    int n;
    cout << " enter the size of elements in array: ";
    cin >> n;
    cout << " enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 2; i >= 0; i--)
    { // outer loop

        bool swapped = 0;
        for (int j = 0; j <= i; j++) // inner loop
        {

            if (arr[j] > arr[j + 1])
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }

        if (swapped == 0)
        { // when swapped is false
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}