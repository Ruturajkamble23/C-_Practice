#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

struct BillItem {
    string itemName;
    int quantity;
    double unitPrice;

    double getTotalPrice() const {
        return quantity * unitPrice;
    }
};

void saveBillToFile(const vector<BillItem>& items, const string& customerName) {
    ofstream outFile("bills.txt", ios::app);

    if (!outFile.is_open()) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    outFile << "Customer: " << customerName << "\n";
    outFile << left << setw(20) << "Item"
            << setw(10) << "Qty"
            << setw(10) << "Price"
            << setw(10) << "Total" << "\n";

    double grandTotal = 0;

    for (const auto& item : items) {
        double total = item.getTotalPrice();
        grandTotal += total;
        outFile << left << setw(20) << item.itemName
                << setw(10) << item.quantity
                << setw(10) << fixed << setprecision(2) << item.unitPrice
                << setw(10) << total << "\n";
    }

    outFile << "Grand Total: ₹" << fixed << setprecision(2) << grandTotal << "\n";
    outFile << "-------------------------------------------\n";
    outFile.close();

    cout << "Bill saved successfully for " << customerName << ".\n";
}

void showAllBills() {
    ifstream inFile("bills.txt");

    if (!inFile.is_open()) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    cout << "\nAll Previous Bills:\n\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
}

int main() {
    vector<BillItem> billItems;
    string customer;
    int choice;

    cout << "Pharmacy Billing System\n";
    cout << "Enter customer name: ";
    getline(cin, customer);

    do {
        BillItem item;
        cout << "\nEnter item name: ";
        getline(cin, item.itemName);
        cout << "Enter quantity: ";
        cin >> item.quantity;
        cout << "Enter price per unit: ";
        cin >> item.unitPrice;
        cin.ignore();

        billItems.push_back(item);

        cout << "Add another item? (1-Yes / 0-No): ";
        cin >> choice;
        cin.ignore();
    } while (choice != 0);

    saveBillToFile(billItems, customer);

    cout << "Do you want to view all bills? (1-Yes / 0-No): \n";
    cout<<"--------------------------------------------------------------------------------------------------------------\n";
    cin >> choice;
    if (choice == 1) {
        showAllBills();
    }

    return 0;
}

