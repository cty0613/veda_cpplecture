#include <iostream>

class Arithmetic {

    private:
        int value;
        int result;
        

    public:
        Arithmetic(int init);
        ~Arithmetic() { };
        Arithmetic& plus(int operand);
        Arithmetic& minus(int operand);
        Arithmetic& mul(int operand);
        Arithmetic& div(int operand);
        int getResult() const {return result;}

};

Arithmetic::Arithmetic(int init) {
    value = init;
    result = 0;
}

Arithmetic& Arithmetic::plus(int operand) {
    result = value + operand;
    return *this;
};

Arithmetic& Arithmetic::minus(int operand) {
    result = value - operand;
    return *this;
};

Arithmetic& Arithmetic::mul(int operand) {
    result = value * operand;
    return *this;
};

Arithmetic& Arithmetic::div(int operand) {
    if (operand == 0) { 
        result = value;
        std::cout << "Operand cannot be Zero" << std::endl;
    } else {
        result = value / operand;
    }

    return *this;
};


int main() {
    
    Arithmetic A(5);

    std::cout << A.plus(5).mul(2).minus(4).div(5).getResult() << std::endl;

    
}