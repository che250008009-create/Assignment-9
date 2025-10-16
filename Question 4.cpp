#include <iostream>
#include <string>
using namespace std;


struct SalesRecord {
    string month;
    float amount;
};

int main() {
    
    SalesRecord sales[12];

    
    cout << "Enter month name and sales amount for each month:\n";
    for (int i = 0; i < 12; i++) {
        cout << "\nMonth " << i + 1 << " name: ";
        cin >> sales[i].month;
        cout << "Sales amount: ";
        cin >> sales[i].amount;
    }

    
    float maxAmount = sales[0].amount;
    float minAmount = sales[0].amount;
    string maxMonth = sales[0].month;
    string minMonth = sales[0].month;

    
    for (int i = 1; i < 12; i++) {
        if (sales[i].amount > maxAmount) {
            maxAmount = sales[i].amount;
            maxMonth = sales[i].month;
        }
        if (sales[i].amount < minAmount) {
            minAmount = sales[i].amount;
            minMonth = sales[i].month;
        }
    }

    
    cout << "\nMonth with Maximum Sales:\n";
    cout << "Month: " << maxMonth << " | Amount: " << maxAmount << endl;

    cout << "\nMonth with Minimum Sales:\n";
    cout << "Month: " << minMonth << " | Amount: " << minAmount << endl;

    return 0;
}
