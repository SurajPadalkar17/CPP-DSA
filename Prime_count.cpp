#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to count prime numbers up to a given limit
int countPrimes(int limit) {
    int count = 0;
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    int primeCount = countPrimes(limit);
    cout << "Number of prime numbers up to " << limit << " is: " << primeCount << endl;

    return 0;
}
