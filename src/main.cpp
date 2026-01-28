#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
int getMenuChoice();


// Driver 
// ** DO NOT MODIFY **
int main()
{
    double balance = 100.00;
    int choice;

    cout << fixed << setprecision(2);

    do
    {
        choice = getMenuChoice();

        switch (choice)
        {
        case 1:
            displayBalance(balance);
            break;

        case 2:
        {
            double amount;
            cout << "Enter deposit amount: ";
            cin >> amount;

            depositByValue(balance, amount);

            cout << "Back in main(), balance is still: $"
                << balance << endl;
            break;
        }

        case 3:
        {
            double amount;
            cout << "Enter deposit amount: ";
            cin >> amount;

            depositByReference(balance, amount);

            cout << "Back in main(), balance is now: $"
                << balance << endl;
            break;
        }

        case 4:
        {
            double amount;
            cout << "Enter withdrawal amount: ";
            cin >> amount;

            if (!withdrawByReference(balance, amount))
            {
                cout << "Withdrawal failed: insufficient funds.\n";
            }
            else
            {
                cout << "Withdrawal successful.\n";
            }
            break;
        }

        case 5:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

        cout << endl;

    } while (choice != 5);

    return 0;
}


int getMenuChoice()
{
    int choice;

    cout << "====== Bank Menu ======\n";
    cout << "1. Display Balance\n";
    cout << "2. Deposit (Pass by Value)\n";
    cout << "3. Deposit (Pass by Reference)\n";
    cout << "4. Withdraw\n";
    cout << "5. Quit\n";
    cout << "Enter choice: ";

    cin >> choice;

    return choice;
}
