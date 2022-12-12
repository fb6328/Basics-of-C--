#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    double sum;
    cout << "Enter any two integers\n";
    cin >> num1; // capture the first integer input
    cin >> num2; // capture the second integer input
    sum = num1 + num2;
    cout << "The sum is " << sum << "\n";
    return 0;
}
