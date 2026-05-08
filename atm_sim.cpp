#include <iostream>

void checkBalance(double balance) {
    std::cout << "Current Balance: $" << balance << std::endl;
}

int main() {
    double balance = 1000.0;
    int pin = 1234;
    int enteredPin, option;
    double amount;

    std::cout << "Enter PIN: ";
    std::cin >> enteredPin;

    if (enteredPin != pin) {
        std::cout << "Invalid PIN. Access denied." << std::endl;
        return 0;
    }

    do {
        std::cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nOption: ";
        std::cin >> option;

        switch (option) {
            case 1: checkBalance(balance); break;
            case 2:
                std::cout << "Amount to deposit: ";
                std::cin >> amount;
                balance += amount;
                break;
            case 3:
                std::cout << "Amount to withdraw: ";
                std::cin >> amount;
                if (amount > balance) std::cout << "Insufficient funds." << std::endl;
                else balance -= amount;
                break;
        }
    } while (option != 4);

    return 0;
}