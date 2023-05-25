#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value" << endl;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum of of values upto entered value= " << sum << endl;
}