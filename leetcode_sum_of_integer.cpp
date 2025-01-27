#include <iostream>

int add(int a, int b) {
    while (b != 0) {
        // Carry now contains common set bits of a and b
        int carry = a & b;
        
        // Sum of bits of a and b where at least one of the bits is not set
        a = a ^ b;
        
        // Carry is shifted by one so that adding it to a gives the required sum
        b = carry << 1;
    }
    return a;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    int sum = add(num1, num2);
    std::cout << "Sum is: " << sum << std::endl;
    
    return 0;
}
