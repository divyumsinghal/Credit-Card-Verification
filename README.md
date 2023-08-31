# Credit Card Validation using Luhn Algorithm

This C++ program validates credit card numbers using the Luhn algorithm (also known as the "modulus 10" algorithm). The Luhn algorithm is commonly used to check the validity of credit card numbers.

## Table of Contents

- [How it Works](#how-it-works)
    - [isNumeric](#isnumeric)
    - [isCreditCardValid](#iscreditcardvalid)
- [Usage](#usage)
- [Note](#note)
- [Disclaimer](#disclaimer)

## How it Works

The program consists of two functions: `isNumeric` and `isCreditCardValid`.

### isNumeric

The `isNumeric` function checks whether a given string consists of only numeric characters. It returns `true` if all characters in the string are digits, and `false` otherwise.

### isCreditCardValid

The `isCreditCardValid` function performs credit card number validation using the Luhn algorithm. The algorithm involves the following steps:
- Starting from the rightmost digit of the credit card number, double every second digit (starting from the second-to-last digit).
- If doubling a digit results in a number greater than 9, subtract 9 from it.
- Sum up all the digits (including the doubled ones).
- If the sum is a multiple of 10, the credit card number is considered valid.

## Usage

The program checks whether the entered credit card number is valid or not, based on the Luhn algorithm. It will display a message indicating the validity of the credit card.

## Note

- The program assumes that the input credit card number is a string of digits. It does not handle spaces or non-digit characters in the input.
- Additional input validation and error handling may be required for real-world scenarios.

## Disclaimer

This program is provided as an educational example and should not be used for handling real credit card information. Handling sensitive data requires following strict security practices and adhering to relevant regulations.

Feel free to modify and enhance the program according to your needs.
