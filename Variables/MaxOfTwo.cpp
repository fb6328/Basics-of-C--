#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Largest number is ";
    switch (num1 > num2)
    {
    case false:
        cout << num2 << endl;
        break;
    case true:
        cout << num1 << endl;
        break;
    default:
        cout << "Invalid input";
    }
}