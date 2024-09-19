// Lab4-4.cpp - displays the volume of a cylinder
// Created/revised by <Elijah Flanagan> on <09/19/24>

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double height = 0.0;
    double radius = 0.0;
    double volume = 0.0;
    const double PI = 3.14;  // Declare PI as a constant

    // Input: Get the height and radius from the user
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    // Process: Calculate the volume of the cylinder
    volume = PI * radius * radius * height;

    // Output: Display the volume
    cout << "Volume of the cylinder: " << volume << endl;

    return 0;
}  // end of main function
