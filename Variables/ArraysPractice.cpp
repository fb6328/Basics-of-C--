#include <iostream>
using namespace std;
int main()
{
    // Declare an array called nums to hold five elements
    int nums[5], sum, product = 1, mean;
    // Input values into an array from a user
    cout << "Enter five whole numbers: " << endl;

    for (int count = 0; count < 5; count++)
    {
        cin >> nums[count];
        cout << "Again: " << endl;
    }
    cout << "You entered the following whole numbers: " << endl;
    for (int count = 0; count < 5; count++)
    {
        sum = sum + nums[count];
        cout << nums[count] << endl;
        product = product * nums[count];
    }
    cout << "Sum of the numbers entered is " << sum << endl;
    cout << "Product of the numbers is:" << product << endl;
    mean = sum / 5;
    cout << "The mean of the numbers is:" << mean << endl;
}