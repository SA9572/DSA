#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(15);
    arr.push_back(20);
    arr.push_back(78);
    arr.push_back(10);
    arr.push_back(75);
    cout << arr[0] << endl; // first element
    cout << arr.front() << endl;

    cout << arr[arr.size() - 1] << endl;
    cout << arr.back() << endl;

    // copy value of 1 vector to another

    vector<int> a;
    a = arr;
    cout << a.size() << endl;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }
}
