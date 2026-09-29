#include <iostream>
#include "mathfuncs.h"
#include "randfuncs.h"
#include "init.h"

using namespace std;

int main()
{
    initialize();

    int choice;
    int a, b;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Flip Coin\n";
        cout << "6. Roll 6-sided Dice\n";
        cout << "7. Roll 10-sided Dice\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Answer = " << add(a, b) << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Answer = " << subtract(a, b) << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Answer = " << multiply(a, b) << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Answer = " << divide(a, b) << endl;
            break;

        case 5:
            if (flipCoin())
                cout << "Heads\n";
            else
                cout << "Tails\n";
            break;

        case 6:
            cout << "Dice = " << roll6() << endl;
            break;

        case 7:
            cout << "Dice = " << roll10() << endl;
            break;

        case 0:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 0);

    return 0;
}
