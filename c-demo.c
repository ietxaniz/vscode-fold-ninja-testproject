#include <stdbool.h>

/**
 * addIntegers - Adds two integers.
 * 
 * This function accepts two integer values and returns the
 * sum of the two. It's a basic demonstration of addition
 * operation in C.
 *
 * @param int a - The first integer.
 * @param int b - The second integer.
 * @return The sum of `a` and `b`.
 */
int addIntegers(int a, int b) {
    return a + b;
}

/**
 * isPrime - Determines if a number is a prime.
 *
 * This function takes an integer and determines whether or
 * not it is a prime number. A prime number is a natural number
 * greater than 1 that is not a product of two smaller natural numbers.
 *
 * Note: This is a simple and not optimized approach to check for prime numbers.
 *
 * @param int num - The number to be checked.
 * @return `true` if `num` is a prime number, `false` otherwise.
 */
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    // Example usage
    int sum = addIntegers(3, 5);
    bool primeCheck = isPrime(7);

    return 0;
}
