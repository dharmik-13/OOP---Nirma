#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    public:
        int accountNumber;
        string holderName;
        double balance;


        BankAccount(int accNo, string name, double bal = 0.0) {
            accountNumber = accNo;
            holderName = name;
            balance = bal;
        }

        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << amount << " deposited successfully." << endl;
            } else {
                cout << "Deposit amount must be positive!" << endl;
            }
        }

        void withdraw(double amount) {
            if (amount <= 0) {
                cout << "Withdrawal amount must be positive!" << endl;
            } else if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                balance -= amount;
                cout << amount << " withdrawn successfully." << endl;
            }
        }

        void display() {
            cout << "\n--- Account Details ---" << endl;
            cout << "Account Number : " << accountNumber << endl;
            cout << "Account Holder : " << holderName << endl;
            cout << "Balance        : " << balance << endl;
        }
};

int main() {
    BankAccount account1(101, "Dharmik", 1000);

    account1.display(); 
    account1.deposit(500);   
    account1.withdraw(200);   
    account1.display();
    
    return 0;
}
