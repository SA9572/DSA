#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> ans;
    ans.push_back(2);
    ans.push_back(5);
    ans.push_back(1);
    ans.push_back(7);
    ans.push_back(3);

    // sort in increasing order
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    // sort in decreasing order
    sort(ans.begin(), ans.end(), greater<int>());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    //  2nd method for sort in decreasing order
    sort(ans.rbegin(), ans.rend());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}