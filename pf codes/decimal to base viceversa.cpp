#include <iostream>
using namespace std;

// Function to convert a number from any base to decimal
int toDecimal(int number, int fromBase) {
    int decimal = 0;
    int power = 1;

    while (number > 0) {
        int digit = number % 10;
        decimal += digit * power;
        power *= fromBase;
        number /= 10;
    }

    return decimal;
}

// Function to convert a decimal number to any base
int toBaseK(int decimal, int baseK) {
    int result = 0;
    int power = 1;

    while (decimal > 0) {
        int remainder = decimal % baseK;
        result += remainder * power;
        power *= 10;
        decimal /= baseK;
    }

    return result;
}

// Demonstration in main
int main() {
    // Example 1: Decimal (base 10) → Base 4
    int dec = 27;
    int base4 = toBaseK(dec, 4);
    cout << "Decimal " << dec << " in base 4 = " << base4 << endl;

    // Example 2: Octal (base 8) → Decimal (base 10)
    int oct = 345;
    int decimal = toDecimal(oct, 8);
    cout << "Octal " << oct << " in decimal = " << decimal << endl;

    return 0;
}
