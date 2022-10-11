#include <iostream>

void calculate(int a, int b, char op);

#define SUM(a, b) (a + b);
#define SUBTRACT(a, b) (a - b);
#define MULTIPLY(a, b) (a * b);
#define DIVIDE(a, b) (a / b);

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
    double result = 0;
    switch (op) {
        case '+':{
            result = SUM(a, b);
            break;
        }
        case '-':{
            result = SUBTRACT(a, b);
            break;
        }
        case '*':{
            result = MULTIPLY(a, b);
            break;
        }
        case '/':{
            result = DIVIDE(a, b);
            break;
        }
        default:{
            std::cout << "Enter right operator!" << std::endl;
            calculate(a, b, op);
            break;
        }
    }
    std::cout << a << ' ' << op << ' ' << b << " = " << result << std::endl;
}