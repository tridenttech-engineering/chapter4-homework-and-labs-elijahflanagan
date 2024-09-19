#include <iostream>
#include <iomanip>  // For setting output precision
using namespace std;

int main() {
    // Declare variables
    double salesAmount = 0.0;
    double commission = 0.0;
    const double COMMISSION_RATE = 0.10;  // Commission rate of 10%

    // Input: Get the sales amount from the user
    cout << "Enter the sales amount: ";
    cin >> salesAmount;

    // Process: Calculate the commission
    commission = salesAmount * COMMISSION_RATE;

    // Output: Display the commission
    cout << fixed << setprecision(2);  // Set output to display two decimal places
    cout << "Commission: $" << commission << endl;

    return 0;
}  // end of main function


