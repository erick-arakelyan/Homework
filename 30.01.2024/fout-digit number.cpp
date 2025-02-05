#include <iostream>

int main() {
    int number;
    std::cout << "Enter four-digit number: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Please input correct number";
        return 1;
    }
    
    int thousands = number / 1000;
    int hundreds = (number / 100) % 10;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    int sum = thousands + hundreds + tens + ones;

    std::cout << "Sum of elements: " << sum;
    return 0;
}
