#include <iostream>
#include <vector>
using namespace std;

// Compute prefix sums using the logic you provided
vector<int> computePrefix(const vector<int> &arr)
{
    int n = (int)arr.size();
    vector<int> prefix(n);
    if (n == 0) // base case for empty array
        return prefix;
    prefix[0] = arr[0];
    for (int i = 1; i < n; ++i)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}

// Compute suffix sums using the logic you provided
vector<int> computeSuffix(const vector<int> &arr)
{
    int n = (int)arr.size();
    vector<int> suffix(n);
    if (n == 0) // base case for empty array
        return suffix;
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }
    return suffix;
}

void printVector(const vector<int> &v)
{
    for (size_t i = 0; i < v.size(); ++i)
    {
        if (i)
            cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "Enter the size of the array followed by the elements:\n";
    int n;
    if (!(cin >> n))
        return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Prefix sums: \n";
    vector<int> pref = computePrefix(arr);
    cout << "Suffix sums: \n";
    vector<int> suf = computeSuffix(arr);

    // Print prefix sums on first line and suffix sums on second line
    printVector(pref);
    printVector(suf);

    return 0;
}
