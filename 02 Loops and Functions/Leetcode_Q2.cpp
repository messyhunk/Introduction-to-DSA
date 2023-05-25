#include <iostream>
using namespace std;

int main()
{
    uint32_t n;
    cout << "Enter a number" << endl;
    cin >> n;

    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
            cout << count << endl;
        }
        n = n >> 1;
    }
    cout << "Number of bits: " << count << endl;
}