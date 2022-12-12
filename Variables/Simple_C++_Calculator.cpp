#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int num1, num2, addition, subtract, mult, div;

    // Ask user to input the num1 and num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Calcutaions
    addition = num1 + num2;
    subtract = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    // Output on the screen
    cout << num1 << "+" << num2 << " = " << addition << endl;
    cout << num1 << "-" << num2 << " = " << subtract << endl;
    cout << num1 << "*" << num2 << " = " << mult << endl;
    cout << num1 << "/" << num2 << " = " << div << endl;
}