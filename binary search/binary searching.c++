#include <iostream>
using namespace std;

int BinarySearch(int arr[], int key, int n)
{
    // start,end,mid

    int start = 0, end = n - 1, mid;

    while (start <= end)
    {

        // find the mid
        mid = (start + end) / 2;

        // mid == key
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        // mid is less than key
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        // mid is greater than key
        else
        {
            end = mid - 1;
        }
    }

    return -1; // when element not found
}

int main()
{
    int arr[100000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enetr the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the elemet to the seacherd: ";
    cin >> key;

    cout << BinarySearch(arr, key, n);
}