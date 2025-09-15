#include <iostream>
using namespace std;

int Sum(int m, int n) // function declaration
{

    int s = m + n; // function define
    return s;
}

void mul(int s, int t)
{
    int p = s * t;
    cout << "The mul is: " << p << endl;
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
    cout << "The sum is: " << Sum(a, b);
    cout << endl;

    cout << endl;
    fun();
}