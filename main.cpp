#include <iostream>
#include <stdexcept>

class Calculator {
public:
    double add (double a, double b) const {
        return a + b;
    }

    double subdivide (double a, double b) const {
        return a - b;
    }
    
    double divide (double a, double b) const {
        return a / b;
    }
    
};

int main() {
    Calculator calculator;
    std::cout << calculator.add(5.5, 14.8);
    return 0;
}
