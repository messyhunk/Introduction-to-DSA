#include <iostream>
using namespace std;

int main()
{
    int n = 10, a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
}