// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <elijahflanagan> on <09/08/24>

#include <iostream>
#include <iomanip>  // For setting precision
using namespace std;

int main() {
    // Declare variables for number of pizzas sold
    int smallPizzas, mediumPizzas, largePizzas, familyPizzas;
    int totalPizzas;
    double smallPercent, mediumPercent, largePercent, familyPercent;

    // Input: Get the number of pizzas sold for each size
    cout << "Enter the number of small pizzas sold: ";
    cin >> smallPizzas;

    cout << "Enter the number of medium pizzas sold: ";
    cin >> mediumPizzas;

    cout << "Enter the number of large pizzas sold: ";
    cin >> largePizzas;

    cout << "Enter the number of family pizzas sold: ";
    cin >> familyPizzas;

    // Processing: Calculate the total number of pizzas sold
    totalPizzas = smallPizzas + mediumPizzas + largePizzas + familyPizzas;

    // Calculate percentages for each size
    smallPercent = (static_cast<double>(smallPizzas) / totalPizzas) * 100;
    mediumPercent = (static_cast<double>(mediumPizzas) / totalPizzas) * 100;
    largePercent = (static_cast<double>(largePizzas) / totalPizzas) * 100;
    familyPercent = (static_cast<double>(familyPizzas) / totalPizzas) * 100;

    // Output the results with 1 decimal precision
    cout << fixed << setprecision(1);
    cout << "Total pizzas sold: " << totalPizzas << endl;
    cout << "Percentage of small pizzas: " << smallPercent << "%" << endl;
    cout << "Percentage of medium pizzas: " << mediumPercent << "%" << endl;
    cout << "Percentage of large pizzas: " << largePercent << "%" << endl;
    cout << "Percentage of family pizzas: " << familyPercent << "%" << endl;

    return 0;
}