#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    void setBalance(double b) {
        balance = b;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    Account acc;

    acc.setBalance(1000);

    cout << "Balance: " << acc.getBalance();

    return 0;
}