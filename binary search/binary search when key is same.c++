// #include <iostream>
// using namespace std;

// int SearchSameKey(int arr[], int n, int key)
// {
//     int start = 0, end = n - 1, first = -1, last = -1, mid;

//     // Find First occurrence
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == key)
//         {
//             first = mid;
//             end = mid - 1; // continue searching left
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     // If key not found
//     if (first == -1)
//         return 0;

//     // Find Last occurrence
//     start = 0, end = n - 1;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == key)
//         {
//             last = mid;
//             start = mid + 1; // continue searching right
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     return (last - first + 1);
// }

// int main()
// {
//     int arr[1000];

//     cout << "Enter the size of array:  ";
//     int n;
//     cin >> n;

//     cout << "enter the element of array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter the element to the seachered: ";
//     cin >> key;

//     cout << SearchSameKey(arr, n, key);
// }

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1, first = -1, last = -1, mid;

        //  Find first

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                first = mid;
                end = mid - 1; // search left
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        // find last

        start = 0, end = nums.size() - 1;

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                last = mid;
                start = mid + 1; // search right
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        vector<int> a(2);
        a[0] = first;
        a[1] = last;

        return a;
    }
};

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target element: ";
    cin >> target;

    Solution s;
    vector<int> ans = s.searchRange(nums, target);

    cout << "First and last position of " << target << ": ["
         << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}
