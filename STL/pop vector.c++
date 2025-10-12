#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;

    // delete value from vector

    v1.push_back(22);
    v1.push_back(12);
    v1.push_back(52);
    v1.push_back(28);
    v1.push_back(20);

    v1.pop_back(); // delete last element

    cout << "size of v1 : " << v1.size() << endl;
    cout << "capacity of v1 : " << v1.capacity() << endl;

    v1.erase(v1.begin() + 1); // delete element at index 1
    cout << "size of v1 : " << v1.size() << endl;
    cout << "capacity of v1 : " << v1.capacity() << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " " << endl;
    }

    v1.insert(v1.begin() + 1, 100); // insert 100 at index 1
    cout << "insert new value : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " " << endl;
    }

    // update value
    v1[1] = 500;
    cout << "update  value : ";
    for (int i = 0; i < v1.size(); i++)
    {

        cout << v1[i] << " " << endl;
    }

    v1.clear();
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;
}