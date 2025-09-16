#include <iostream>
using namespace std;

void Sum(int m, int n) // function declaration
{

    int s = m + n; // function define
    cout << "The sum is: " << s;
}

void mul(int s, int t)
{
    int p = s * t;
    cout << "The mul is: " << p;
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
    mul(a, b);
    cout << endl;
    fun();
}