#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create a vector, decleare
    vector<int> v;
    vector<int> v1(5, 1);
    // size and capacity

    cout << "size : " << v.size() << endl;
    cout << "capacity : " << v.capacity() << endl;

    // add elements
    v.push_back(2);
    v.push_back(3);
    v.push_back(22);
    v.push_back(36);

    cout << "size : " << v.size() << endl;
    cout << "capacity : " << v.capacity() << endl;

    // update value
    v[1] = 5;

    cout << "size of v1 : " << v1.size() << endl;
    cout << "capacity  of v1: " << v1.capacity() << endl;
    v1.push_back(8);

    cout << "size of v1 : " << v1.size() << endl;
    cout << "capacity  of v1: " << v1.capacity() << endl;
}