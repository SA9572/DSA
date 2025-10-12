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
    cout << binary_search(ans.begin(), ans.end(), 5) << endl;

    // int key = 5;
    // bool present = binary_search(ans.begin(), ans.end(), key);
    // if (present)
    // {
    //     cout << "present" << endl;
    // }
    // else
    // {
    //     cout << "not present" << endl;
    // }

    // key = 6;
    // present = binary_search(ans.begin(), ans.end(), key);
    // if (present)
    // {
    //     cout << "present" << endl;
    // }
    // else
    // {
    //     cout << "not present" << endl;
    // }

    // find the index of any elements

    cout << find(ans.begin(), ans.end(), 7) - ans.begin() << endl; // it return the address of 5 and minus with address of starting point of vector
}