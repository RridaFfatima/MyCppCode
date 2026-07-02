#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                 "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                 "sixteen", "seventeen", "eighteen", "nineteen"};

string tens[] = {"", "", "twenty", "thirty", "forty", "fifty",
                 "sixty", "seventy", "eighty", "ninety"};

string convertThreeDigits(int n) {
    string result = "";
    if (n >= 100) {
        result += ones[n / 100] + " hundred ";
        n %= 100;
    }
    if (n >= 20) {
        result += tens[n / 10] + " ";
        n %= 10;
    }
    if (n > 0) {
        result += ones[n] + " ";
    }
    return result;
}
string numberToWords(long long n) {
    string words = "";
    if (n >= 10000000) {
        words += convertThreeDigits(n / 10000000) + " crore ";
        n %= 10000000;
    }
    if (n >= 100000) {
        words += convertThreeDigits(n / 100000) + " lakh ";
        n %= 100000;
    }
    if (n >= 1000) {
        words += convertThreeDigits(n / 1000) + " thousand ";
        n %= 1000;
    }
    if (n > 0) {
        words += convertThreeDigits(n);
    }
    return words;
}

int main() {
    const int SIZE = 20;
    double numbers[SIZE];
   
    cout<<"enter numbers"<<endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }
    
    
    cout << "\nNumbers in words:\n";
    for (int i = 0; i < SIZE; i++) {
        long long rupees = (long long)numbers[i];
        int paisas = (int)round((numbers[i] - rupees) * 100);

        string words = numberToWords(rupees) + " rupees";
        if (paisas > 0) {
            words += " and " + numberToWords(paisas) + " paisas";
        }
        cout << numbers[i] << " ---> " << words << endl;
    }

    return 0;
}