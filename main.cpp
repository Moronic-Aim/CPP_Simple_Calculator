#include <iostream>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int modulo(int a, int b) {
    return a % b;
}

int main() {
    int num1;
    int num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // call functions
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << add(num1, num2) << std::endl;
    std::cout << "The difference of " << num1 << " and " << num2 << " is " << subtract(num1, num2) << std::endl;
    std::cout << "The product of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << std::endl;
    std::cout << "The division of " << num1 << " and " << num2 << " is " << divide(num1, num2) << std::endl;
    std::cout << "The remainder of " << num1 << " and " << num2 << " is " << modulo(num1, num2) << std::endl;

    return 0;
}
