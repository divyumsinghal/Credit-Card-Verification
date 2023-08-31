#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isNumeric(const string &str);
bool isCreditCardValid(const string &creditCardNumber);

int main() {
    string creditCardNumber;

    cout << "Enter credit card number: ";
    cin >> creditCardNumber;

    if (isCreditCardValid(creditCardNumber)) {
         cout << "Credit card is valid." << endl;
    } else {
         cout << "Credit card is not valid." << endl;
    }

    return 0;
}

bool isNumeric(const string &str) {
    return !str.empty() && all_of(str.begin(), str.end(), ::isdigit);
}

bool isCreditCardValid(const string &creditCardNumber) {
    if (!isNumeric(creditCardNumber)) {
        return false;
    }

    int sum = 0;
    bool doubleDigit = false;

    for (int i = creditCardNumber.length() - 1; i >= 0; i--) {
        int digit = creditCardNumber[i] - '0';

        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        doubleDigit = !doubleDigit;
    }

    return (sum % 10) == 0;
}
