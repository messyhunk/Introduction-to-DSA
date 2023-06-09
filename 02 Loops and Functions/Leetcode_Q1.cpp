/*
1281. Subtract the Product and Sum of Digits of an Integer
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
*/

#include <iostream>
using namespace std;

int main()
{
    int value;
    int sum = 0, product = 1;
    cout << "Input a number" << endl;
    cin >> value;

    while (value != 0)
    {
        int digit = value % 10;
        product *= digit;
        sum += digit;

        value = value / 10;
    }
    int answer = product - sum;
    cout << "The required answer is " << answer << endl;
}