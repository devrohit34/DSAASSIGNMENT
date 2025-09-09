// Write a program to ask user about the cost price and selling 
// price banana per dozen. Calculate the profit or loss earned 
// upon selling 25 bananas.
#include <iostream>
using namespace std;

int main() {
    float costPerDozen, sellingPerDozen;
    float costPerBanana, sellingPerBanana;
    int quantity = 25;
    float totalCost, totalSelling, result;

    // Input cost and selling price per dozen
    cout << "Enter cost price per dozen bananas: ";
    cin >> costPerDozen;

    cout << "Enter selling price per dozen bananas: ";
    cin >> sellingPerDozen;

    // Calculate per banana price
    costPerBanana = costPerDozen / 12.0;
    sellingPerBanana = sellingPerDozen / 12.0;

    // Calculate total cost and selling price for 25 bananas
    totalCost = costPerBanana * quantity;
    totalSelling = sellingPerBanana * quantity;

    // Calculate profit or loss
    result = totalSelling - totalCost;

    // Display result
    if (result > 0) {
        cout << "Profit earned on selling 25 bananas: ₹" << result << endl;
    } else if (result < 0) {
        cout << "Loss incurred on selling 25 bananas: ₹" << -result << endl;
    } else {
        cout << "No profit, no loss on selling 25 bananas." << endl;
    }

    return 0;
}