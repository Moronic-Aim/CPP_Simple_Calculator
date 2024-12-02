#include <iostream>

int main() {
    int num1;
    int num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << std::endl;
    std::cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << std::endl;
    std::cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << std::endl;
    std::cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / num2 << std::endl;
    std::cout << "The remainder of " << num1 << " and " << num2 << " is " << num1 % num2 << std::endl;

    return 0;
}
