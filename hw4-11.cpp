// Introductory11.cpp - displays ending balance
// Created/revised by <elijahflanagan> on <09/18/24>

#include <iostream>
#include <iomanip>  // For setting precision
using namespace std;

int main() {
    // Declare variables to store the sale price, tax rate, sales tax, and final cost
    double salePrice = 0.0;
    double taxRate = 0.0;
    double salesTax = 0.0;
    double cost = 0.0;

    // Prompt the user to enter the sale price
    cout << "Enter the sale price: $";
    cin >> salePrice;

    // Prompt the user to enter the sales tax rate (as a decimal, e.g., 0.07 for 7%)
    cout << "Enter the sales tax rate (as a decimal): ";
    cin >> taxRate;

    // Calculate the sales tax
    salesTax = salePrice * taxRate;

    // Calculate the final cost by adding the sales tax to the sale price
    cost = salePrice + salesTax;

    // Display the final cost with 2 decimal places
    cout << fixed << setprecision(2);  // Set output to 2 decimal places
    cout << "The total cost including sales tax is: $" << cost << endl;

    return 0;
}
