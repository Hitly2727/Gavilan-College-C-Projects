#include <iostream>
#include <vector>
#include <string>

struct Product {
    std::string name;
    int quantity;
    double price;
};

void showMenu() {
    std::cout << "\n--- Inventory Management ---\n";
    std::cout << "1. Add Product\n";
    std::cout << "2. View Inventory\n";
    std::cout << "3. Exit\n";
    std::cout << "Selection: ";
}

int main() {
    std::vector<Product> inventory;
    int choice;

    while (true) {
        showMenu();
        std::cin >> choice;

        if (choice == 3) break;

        if (choice == 1) {
            Product p;
            std::cout << "Name: ";
            std::cin >> p.name;
            std::cout << "Quantity: ";
            std::cin >> p.quantity;
            std::cout << "Price: ";
            std::cin >> p.price;
            inventory.push_back(p);
        } else if (choice == 2) {
            std::cout << "\nList of Products:\n";
            for (const auto& item : inventory) {
                std::cout << "Item: " << item.name << " | Stock: " << item.quantity << " | Price: $" << item.price << "\n";
            }
        }
    }
    return 0;
}