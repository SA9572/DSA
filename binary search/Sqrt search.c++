#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {

        int start = 0, end = x, ans, mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if (mid * mid == x)
            {
                ans = mid;
                break;
            }
            else if (mid * mid < x)
            {
                ans = mid;       // possible answer
                start = mid + 1; // move right
            }
            else
            {
                end = mid - 1; // move left
            }
        }
        return ans; // floor value
    }
};

int main()
{
    int x;
    cout << "Enter a non-negative integer: ";
    cin >> x;

    Solution sol;
    int result = sol.mySqrt(x);
    cout << "Square root (floor) of " << x << " is: " << result << endl;

    return 0;
}
