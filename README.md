# Restaurant Billing System in C++

A simple console-based C++ project that lets a customer order food items from a menu and generates a final bill.

This is a beginner-friendly food-related project for GitHub.

## Features

- Displays a restaurant menu
- Lets the user choose food items
- Accepts quantity for each item
- Calculates subtotal, tax, and final bill
- Prints a neat receipt

## Menu Items

| Item No. | Food Item | Price |
| --- | --- | --- |
| 1 | Veg Burger | Rs. 80 |
| 2 | Cheese Pizza | Rs. 150 |
| 3 | French Fries | Rs. 70 |
| 4 | Cold Coffee | Rs. 90 |
| 5 | Chocolate Brownie | Rs. 120 |

## How to Run

Install a C++ compiler first if your system does not already have one.

Compile the program:

```bash
g++ main.cpp -o restaurant_billing
```

Run the program:

```bash
./restaurant_billing
```

On Windows PowerShell:

```powershell
.\restaurant_billing.exe
```

## Sample Output

```text
===== Welcome to Foodie's Corner =====

------------- Menu -------------
1. Veg Burger           Rs. 80
2. Cheese Pizza         Rs. 150
3. French Fries         Rs. 70
4. Cold Coffee          Rs. 90
5. Chocolate Brownie    Rs. 120
0. Finish Order

Enter item number: 2
Enter quantity: 1
Added Cheese Pizza x 1 to your order.

Enter item number: 3
Enter quantity: 2
Added French Fries x 2 to your order.

Enter item number: 0

------------- Bill -------------
Cheese Pizza         x 1 = Rs. 150
French Fries         x 2 = Rs. 140

Subtotal: Rs. 290.00
Tax 5%: Rs. 14.50
Total Bill: Rs. 304.50

Thank you for visiting Foodie's Corner!
```

## How to Add to GitHub

```bash
git init
git add .
git commit -m "Add restaurant billing system project"
git branch -M main
git remote add origin https://github.com/your-username/restaurant-billing-system-cpp.git
git push -u origin main
```

## Project Files

```text
restaurant-billing-system-cpp/
├── main.cpp
├── README.md
├── sample_output.txt
└── .gitignore
```
