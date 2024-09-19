// Lab4-6.cpp - displays the area of a triangle
// Created/revised by <Elijah Flanagan> on <09/19/24>

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int base = 11;
    int height = 13;
    double area = 0.0;

    // Calculate and display area
    area = (base * height) / 2.0;  // Use 2.0 to ensure floating-point division
    cout << "Area: " << area << endl;

    return 0;
}  // end of main function
