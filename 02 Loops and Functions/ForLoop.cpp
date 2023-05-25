#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value" << endl;
    cin >> n;

    cout << "Printing count from 1 to value provided" << endl;
    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }

        i++;
    }
}
