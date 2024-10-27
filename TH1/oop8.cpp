#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <ctime>
#include <algorithm>

using namespace std;

struct Date {
    int day;
    int month;
    int year;

    bool isValid() const {
        if (year < 1900 || month < 1 || month > 12 || day < 1 || day > 31) return false;
        if (month == 2) {
            bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            return day <= (leap ? 29 : 28);
        }
        if (month == 4 || month == 6 || month == 9 || month == 11) return day <= 30;
        return true;
    }
};

struct SavingsAccount {
    string accountID;
    string accountType;
    string customerName;
    int idNumber;
    Date openDate;
    double depositAmount;

    bool isValidAccountID() const {
        return accountID.length() <= 5 && regex_match(accountID, regex("^[a-zA-Z0-9]+$"));
    }

    bool isValidCustomerName() const {
        return customerName.length() <= 30 && regex_match(customerName, regex("^[a-zA-Z ]+$"));
    }

    bool isValidIDNumber() const {
        return to_string(idNumber).length() == 9 || to_string(idNumber).length() == 12;
    }

    bool isValidDepositAmount() const {
        return depositAmount > 0;
    }
};

void inputSavingsAccount(SavingsAccount &account) {
    do {
        cout << "Enter account ID (max 5 characters, no special characters): ";
        cin >> account.accountID;
    } while (!account.isValidAccountID());

    cout << "Enter account type (max 10 characters): ";
    cin >> account.accountType;

    do {
        cout << "Enter customer name (max 30 characters, no numbers or special characters): ";
        cin.ignore();
        getline(cin, account.customerName);
    } while (!account.isValidCustomerName());

    do {
        cout << "Enter ID number (9 or 12 digits): ";
        cin >> account.idNumber;
    } while (!account.isValidIDNumber());

    do {
        cout << "Enter open date (dd mm yyyy): ";
        cin >> account.openDate.day >> account.openDate.month >> account.openDate.year;
    } while (!account.openDate.isValid());

    do {
        cout << "Enter deposit amount (positive number): ";
        cin >> account.depositAmount;
    } while (!account.isValidDepositAmount());
}

void displaySavingsAccount(const SavingsAccount &account) {
    cout << "Account ID: " << account.accountID << endl;
    cout << "Account Type: " << account.accountType << endl;
    cout << "Customer Name: " << account.customerName << endl;
    cout << "ID Number: " << account.idNumber << endl;
    cout << "Open Date: " << account.openDate.day << "/" << account.openDate.month << "/" << account.openDate.year << endl;
    cout << "Deposit Amount: " << account.depositAmount << endl;
}

int main() {
    vector<SavingsAccount> accounts;
    SavingsAccount account;
    char choice;

    do {
        inputSavingsAccount(account);
        accounts.push_back(account);

        cout << "Do you want to add another account? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    for (const auto &acc : accounts) {
        displaySavingsAccount(acc);
        cout << "--------------------------" << endl;
    }

    return 0;
}