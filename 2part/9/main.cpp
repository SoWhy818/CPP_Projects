#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(const string& number, double initialBalance)
        : accountNumber(number), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Сумма пополнения должна быть положительной." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Сумма снятия должна быть положительной." << endl;
            return;
        }
        if (amount > balance) {
            cout << "Недостаточно средств для снятия." << endl;
        } else {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    BankAccount account("1234567890", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    cout << "Текущий баланс: " << account.getBalance() << endl;
    account.withdraw(2000.0);
    return 0;
}
