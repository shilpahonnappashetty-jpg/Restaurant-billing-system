#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct MenuItem {
    int number;
    string name;
    double price;
};

struct OrderItem {
    string name;
    int quantity;
    double price;
};

void displayMenu(const vector<MenuItem>& menu) {
    cout << "------------- Menu -------------\n";

    for (const MenuItem& item : menu) {
        cout << item.number << ". "
             << left << setw(20) << item.name
             << "Rs. " << item.price << '\n';
    }

    cout << "0. Finish Order\n\n";
}

int findMenuIndex(const vector<MenuItem>& menu, int itemNumber) {
    for (int i = 0; i < static_cast<int>(menu.size()); i++) {
        if (menu[i].number == itemNumber) {
            return i;
        }
    }

    return -1;
}

int main() {
    const vector<MenuItem> menu = {
        {1, "Veg Burger", 80},
        {2, "Cheese Pizza", 150},
        {3, "French Fries", 70},
        {4, "Cold Coffee", 90},
        {5, "Chocolate Brownie", 120}
    };

    vector<OrderItem> order;
    int choice;

    cout << fixed << setprecision(2);
    cout << "===== Welcome to Foodie's Corner =====\n\n";

    displayMenu(menu);

    while (true) {
        cout << "Enter item number: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        int menuIndex = findMenuIndex(menu, choice);

        if (menuIndex == -1) {
            cout << "Invalid item number. Please try again.\n\n";
            continue;
        }

        int quantity;
        cout << "Enter quantity: ";
        cin >> quantity;

        if (quantity <= 0) {
            cout << "Quantity must be greater than 0.\n\n";
            continue;
        }

        order.push_back({
            menu[menuIndex].name,
            quantity,
            menu[menuIndex].price
        });

        cout << "Added " << menu[menuIndex].name
             << " x " << quantity << " to your order.\n\n";
    }

    if (order.empty()) {
        cout << "\nNo items ordered. Thank you for visiting!\n";
        return 0;
    }

    double subtotal = 0;

    cout << "\n------------- Bill -------------\n";

    for (const OrderItem& item : order) {
        double itemTotal = item.price * item.quantity;
        subtotal += itemTotal;

        cout << left << setw(20) << item.name
             << "x " << item.quantity
             << " = Rs. " << itemTotal << '\n';
    }

    double tax = subtotal * 0.05;
    double total = subtotal + tax;

    cout << "\nSubtotal: Rs. " << subtotal << '\n';
    cout << "Tax 5%: Rs. " << tax << '\n';
    cout << "Total Bill: Rs. " << total << "\n\n";
    cout << "Thank you for visiting Foodie's Corner!\n";

    return 0;
}
