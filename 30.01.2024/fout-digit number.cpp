#include <iostream>

int main() {
    int number, sum = 0;
    std::cout << "Enter four-digit number: ";
    std::cin >> number;
    if (number < 1000 || number > 9999) {
        std::cout << "Please input correct number";
        return 1;
    }
    while (number > 0) {
        sum += number % 10;  
        number /= 10;       
    }
    std::cout << "Sum of elements: " << sum;
    return 0;
}
