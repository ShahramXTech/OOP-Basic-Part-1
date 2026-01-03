#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    float balance;

public:
    void setNumber(string N) {
        accountNumber = N;
    }

    void setBalance(float b) {
        balance = b;
    }

    string getAccountNumber() {
        return accountNumber;
    }

    float getBalance() {
        return balance;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
};

int main() {
    string N;
    float b, depositAmount;

    cout << "Enter account number: ";
    cin >> N;

    cout << "Enter initial balance: ";
    cin >> b;

    BankAccount account;
    account.setNumber(N);
    account.setBalance(b);

    cout << "Account number: " << account.getAccountNumber() << endl;
    cout << "Initial balance: " << account.getBalance() << endl;

    cout << "Enter deposit amount: ";
    cin >> depositAmount;

    account.deposit(depositAmount);

    cout << "After deposit balance: " << account.getBalance() << endl;

    return 0;
}

