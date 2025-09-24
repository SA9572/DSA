#include <iostream>
using namespace std;

int main()
{

    int aarr[10000];
    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    cout << "Enter the elements of array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> aarr[i];
    }

    for (int j = n - 1; j > 0; j--)
    {
        if (aarr[j] < aarr[j - 1])
        {
            swap(aarr[j], aarr[j - 1]);
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << aarr[i] << " ";
    }
}