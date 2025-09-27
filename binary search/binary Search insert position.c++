// ------------------------------->>>>>>>> with vector andusing class ---------------------->>>>>>>>>

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1, ans = nums.size(), mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                ans = mid; // found target
                break;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
        // If target not found, start is the correct insertion position
        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted distinct elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target element: ";
    cin >> target;

    Solution s;
    int result = s.searchInsert(nums, target);

    cout << "Target should be at index: " << result << endl;

    return 0;
}

// -------------------->>>>>>>>>> using function <<<<<<<<<<--------------------
#include <iostream>
using namespace std;

int searchInsert(int arr[], int n, int target)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid; // Found the target
        }
        else if (arr[mid] < target)
        {
            start = mid + 1; // Search right half
        }
        else
        {
            end = mid - 1; // Search left half
        }
    }
    // If target not found, start is the insertion index
    return start;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[10000]; // array size as per constraints
    cout << "Enter " << n << " sorted distinct elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int result = searchInsert(arr, n, target);
    cout << "Target should be at index: " << result << endl;

    return 0;
}
