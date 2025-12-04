#include <algorithm>
#include <utility>
class Solution
{
public:
    void segregate0and1(int arr[], int n)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            if (arr[start] == 0)
            {
                start++;
            }
            else
            {
                if (arr[end] == 0)
                {
                    std::swap(arr[start], arr[end]);
                    start++, end--;
                }
                else
                {
                    end--;
                }
            }
        }
    }
};

 