#include <iostream>
using namespace std;

void Sum(int m, int n) // function declaration
{

    int s = m + n; // function define
    cout << "The sum is: " << s;
}

int mul(int s, int t)
{
    int p = s * t;
    return p;
}

void fun()
{
    cout << "This is a void function" << endl;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // function call
    Sum(a, b);
    cout << endl;
    cout << "The mul is: " << mul(a, b);
    cout << endl;
    fun();
}