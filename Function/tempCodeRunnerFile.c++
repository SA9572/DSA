#include <iostream>
using namespace std;

int Sum(int m, int n){
    int s;
    s = m + n;
    return s;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    //function call
    cout << "The sum is: " << Sum(a, b);
}