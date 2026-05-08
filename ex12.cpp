#include <iostream>
using namespace std;

int main()
{
    int choice;
    float amount, convertedAmount;

    cout << "====== Currency Converter ======" << endl;
    cout << "1. INR to USD" << endl;
    cout << "2. USD to INR" << endl;
    cout << "3. INR to EURO" << endl;
    cout << "4. EURO to INR" << endl;
    cout << "5. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter amount in INR: ";
            cin >> amount;

            convertedAmount = amount / 83.0;
            cout << "Converted Amount in USD = "
                 << convertedAmount << endl;
            break;

        case 2:
            cout << "Enter amount in USD: ";
            cin >> amount;

            convertedAmount = amount * 83.0;
            cout << "Converted Amount in INR = "
                 << convertedAmount << endl;
            break;

        case 3:
            cout << "Enter amount in INR: ";
            cin >> amount;

            convertedAmount = amount / 90.0;
            cout << "Converted Amount in EURO = "
                 << convertedAmount << endl;
            break;

        case 4:
            cout << "Enter amount in EURO: ";
            cin >> amount;

            convertedAmount = amount * 90.0;
            cout << "Converted Amount in INR = "
                 << convertedAmount << endl;
            break;

        case 5:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}