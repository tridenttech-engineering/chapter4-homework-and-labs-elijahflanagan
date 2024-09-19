// Advanced16.cpp
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

int main()
{
    // Declare the necessary variables for store sales and total
    double store1, store2, increase;
    int store1Int, store2Int, totalInt;

    // Input: Get the sales for Store 1, Store 2, and the increase percentage
    cout << "Enter sales for Store 1: ";
    cin >> store1;
    
    cout << "Enter sales for Store 2: ";
    cin >> store2;

    cout << "Enter the percentage increase (as a decimal): ";
    cin >> increase;

    // Process: Convert to integer (cents) and apply the increase
    store1Int = static_cast<int>(store1 * increase * 100 + 0.5);  // Rounding to nearest cent
    store2Int = static_cast<int>(store2 * increase * 100 + 0.5);  // Rounding to nearest cent
    totalInt = store1Int + store2Int;  // Total sales in cents

    // Output: Display the updated sales in dollars with two decimal places
    cout << fixed << setprecision(2);  // Set output format to 2 decimal places
    cout << "Store 1 updated sales: $" << store1Int / 100.0 << endl;
    cout << "Store 2 updated sales: $" << store2Int / 100.0 << endl;
    cout << "Total updated sales: $" << totalInt / 100.0 << endl;

    return 0;
}  // end of main function
