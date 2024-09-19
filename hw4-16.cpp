// Advanced16.cpp
// Created/revised by <Elijah Flanagan> on <09/19/24>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare constant and variables
    const double increase = 1.05;  // 5% increase
    double store1 = 0.0, store2 = 0.0;
    int store1Int = 0, store2Int = 0, totalInt = 0;  // Declare integer variables for monetary calculations
    
    // Input store sales
    cout << "Store 1 sales: ";
    cin >> store1;
    
    cout << "Store 2 sales: ";
    cin >> store2;
    
    // Convert sales to integer cents and apply the increase
    store1Int = static_cast<int>(store1 * increase * 100 + 0.5);  // Store sales in cents
    store2Int = static_cast<int>(store2 * increase * 100 + 0.5);  // Store sales in cents
    totalInt = store1Int + store2Int;  // Calculate the total in cents
    
    // Output results in dollars with two decimal places
    cout << fixed << setprecision(2);
    cout << store1Int / 100.0 << " ---> Store 1" << endl;
    cout << store2Int / 100.0 << " ---> Store 2" << endl;
    cout << "-----------------" << endl;
    cout << totalInt / 100.0 << " ---> Total" << endl;

    return 0;
}  // end of main function

