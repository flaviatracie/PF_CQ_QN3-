#include <iostream>

int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    // Example usage:
    int first = 3;
    int last = 7;

    std::cout << "The sum from " << first << " to " << last << " is: " << sum_from_to(first, last) << std::endl;

    return 0;
}
