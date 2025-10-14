// two pointer approach to segregate 0s and 1s in an array
#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    // Reorders the array in-place so that all 0s come before all 1s.
    // Works in O(n) time and O(1) extra space.
    void segregate0and1(int arr[], int n)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            if (arr[start] == 0)
            {
                ++start;
            }
            else
            {
                if (arr[end] == 0)
                {
                    std::swap(arr[start], arr[end]);
                    ++start;
                    --end;
                }
                else
                {
                    --end;
                }
            }
        }
    }
};

int main()
{
    // Input format:
    // First line: n (number of elements)
    // Second line: n integers (each either 0 or 1)
    // Example:
    // 7
    // 0 1 0 1 1 0 0

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    if (!(std::cin >> n))
        return 0;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
        std::cin >> a[i];

    Solution sol;
    sol.segregate0and1(a.data(), n);

    for (int i = 0; i < n; ++i)
    {
        if (i)
            std::cout << ' ';
        std::cout << a[i];
    }
    std::cout << '\n';

    return 0;
}
