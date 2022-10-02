#include <iostream>

void calculate(int a, int b, char op);

int main() {
    int a,b;
    char op;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    std::cout << "Enter operator: ";
    std::cin >> op;

    calculate(a,b,op);

    return 0;
}

void calculate(int a, int b, char op){
    switch (op) {
        case '+':{
            std::cout << a << " + " << b << " = " << a + b << std::endl;
            break;
        }
        case '-':{
            std::cout << a << " - " << b << " = " << a - b << std::endl;
            break;
        }
        case '*':{
            std::cout << a << " * " << b << " = " << a * b << std::endl;
            break;
        }
        case '/':{
            std::cout << a << " / " << b << " = " << a / float(b) << std::endl;
            break;
        }
        default:{
            std::cout << "Enter right operator!" << std::endl;
            break;
        }
    }
}