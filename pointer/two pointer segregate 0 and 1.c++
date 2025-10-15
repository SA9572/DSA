// Simple, complete program to segregate 0s and 1s using the two-pointer technique.
// Input format:
// First line: n (number of elements)
// Second line: n integers (each should be 0 or 1)
// Output: the array after segregation (all 0s first, then 1s), space-separated

#include <bits/stdc++.h>
using namespace std;

// Move all 0s to the left and 1s to the right in O(n) time and O(1) extra space.
void segregate0and1(vector<int> &a)
{
    int i = 0, j = (int)a.size() - 1;
    while (i < j)
    {
        if (a[i] == 0)
        {
            ++i;
            continue;
        }
        if (a[j] == 1)
        {
            --j;
            continue;
        }
        // a[i] == 1 and a[j] == 0
        swap(a[i], a[j]);
        ++i;
        --j;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0; // no input
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    segregate0and1(a);

    for (int i = 0; i < n; ++i)
    {
        if (i)
            cout << ' ';
        cout << a[i];
    }
    cout << '\n';
    return 0;
}
