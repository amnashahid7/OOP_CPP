#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.deposit(500);
    acc.showBalance();

    return 0;
}