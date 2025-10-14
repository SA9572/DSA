/*--------------------------->>>>>>>>>>>>>>>>> USING TWO POINTERS >>>>>>>>>>>>>>>>>>>>>>>>>>>---------------------*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &num, int target)
    {

        vector<int> ans;
        int start = 0, end = num.size() - 1;

        while (start < end)
        {
            if (num[start] + num[end] == target)
            {
                ans.push_back(start + 1);
                ans.push_back(end + 1);
                return ans;
            }
            else if (num[start] + num[end] < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return ans;
    }
};

// Usage:
// First line: n (number of elements)
// Second line: n integers (sorted in non-decreasing order)
// Third line: target integer
// Example:
// 4
// 2 7 11 15
// 9
// Output: 1 2

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    int target;
    cin >> target;

    Solution sol;
    vector<int> res = sol.twoSum(nums, target);

    if (res.empty())
    {
        cout << "No pair found" << '\n';
    }
    else
    {
        cout << res[0] << " " << res[1] << '\n';
    }

    return 0;
}