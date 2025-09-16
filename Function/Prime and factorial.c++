#include <iostream>
using namespace std;
bool Prime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int Fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)

        ans = ans * i;

    return ans;
}

int main()
{
    int a, b;
    cout << "Enter num : ";
    cin >> a >> b;

    cout << Prime(a) << endl; // A is prime or not

    cout << Fact(a) << endl; // Factorial of A
    cout << Fact(b) << endl; // Factorial of b

    cout << Prime(b) << endl; // b is prime or not

    cout << Prime(b - a) << endl; // b-a is prime or not

    cout << Fact(b - a) << endl; // factorial of b-a;
}