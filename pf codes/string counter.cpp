#include<iostream>
#include<string>
using namespace std;

void counter(string a) {
    int i = 0;
    int j = 0;
    while (a[j] != '.') {// here a[j] means character at j index of string a
        cout << a[j];//this means that value at 0 index bcz j=0so its basically is a[0] the first index
        i++;//counts the character
        j++;//moves to next character
    }
    cout << a[j]; // to also print '.'
    i++;
    cout << endl << "has " << i << " characters.";
}

int main() {
    string statement = "Write a function that returns the sum of digits of its only int parameter.";
    counter(statement);
    cout << endl;
    return 0;
}
