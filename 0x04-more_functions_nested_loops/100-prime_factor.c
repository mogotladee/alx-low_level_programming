#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(long long num) {
    if (num < 2)
        return 0;

    for (long long i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

// Function to find the largest prime factor
long long largest_prime_factor(long long num) {
    long long largest_factor = -1;

    while (num % 2 == 0) {
        largest_factor = 2;
        num /= 2;
    }

    for (long long i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            largest_factor = i;
            num /= i;
        }
    }

    if (num > 2)
        largest_factor = num;

    return largest_factor;
}

int main() {
    long long num = 612852475143LL;
    long long largest_factor = largest_prime_factor(num);

    printf("%lld\n", largest_factor);

    return 0;
}

