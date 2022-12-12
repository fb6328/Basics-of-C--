#include <iostream>
using namespace std;
int main()
{
    // Step 1: Varaible declaration
    int length, width, area;

    // Step: 2 Capture input from the user
    cout << "Enter the rectangle length:";
    cin >> length;
    cout << "Enter the rectangle width:";
    cin >> width;
    // Step 3: Logic/Calculations/Processing
    area = length * width;
    // Step 4: Output
    cout << "Area of a rectangle whose length is " << length << " and width is " << width << " = " << area << endl;
}