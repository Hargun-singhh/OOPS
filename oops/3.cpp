// data Hiding using bank example balance is on in read mode
#include <iostream>
using namespace std;

class BankAccount {
private:
    // Private data member, hidden from outside
    double balance;

public:
    // Constructor to initialize balance
    BankAccount(double initial_balance) {
        if (initial_balance >= 0)
            balance = initial_balance;
        else
            balance = 0;
    }

    // Getter method for balance (only read access)
    double getBalance() const {
        return balance;
    }

    // Setter method for depositing money (only controlled access)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    // Setter method for withdrawing money (with a check)
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds" << endl;
        }
    }
};

int main() {
  
    BankAccount account(10000.0);
    cout << "Current balance: " << account.getBalance() << endl;
    account.deposit(500.0);
    cout << "New balance: " << account.getBalance() << endl;

    account.withdraw(200.0);
    cout << "Balance after withdrawal: " << account.getBalance() << endl;
    cout << "Final balance " << account.getBalance() << endl;


    return 0;
}
