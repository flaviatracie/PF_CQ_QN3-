#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0; // Failure: either num or denom is zero or negative
    }

    int divisor = gcd(num, denom); // Get the GCD of num and denom

    num /= divisor;   // Divide num by GCD
    denom /= divisor; // Divide denom by GCD

    return 1; // Success
}

int main() {
    // Example usage:
    int num = 50;
    int denom = 100;

    if (reduce(num, denom)) {
        std::cout << "Reduced fraction: " << num << "/" << denom << std::endl;
    } else {
        std::cout << "Reduction failed." << std::endl;
    }

    return 0;
}
