#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = 1;
    cout << "Enter a value" << endl;
    cin >> n;

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
        cout << "It is not a prime number" << endl;
    else
        cout << "It is a prime number" << endl;
}