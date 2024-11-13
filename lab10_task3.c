#include <stdio.h>
#include <stdlib.h>


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Помилка: ділення на нуль!\n");
        exit(1);
    }
    return a / b;
}

int main() {
   
    double (*operations[4])(double, double) = { add, subtract, multiply, divide };

 
    double operand1, operand2;
    char operator;

 
    printf("Введіть вираз : ");
    if (scanf("%lf%c%lf", &operand1, &operator, &operand2) != 3) {
        printf("Помилка вводу. Будь ласка, введіть у форматі: число оператор число\n");
        return 1;
    }

  
    double result;
    switch (operator) {
        case '+':
            result = operations[0](operand1, operand2);  
            break;
        case '-':
            result = operations[1](operand1, operand2);  
            break;
        case '*':
            result = operations[2](operand1, operand2);  
            break;
        case '/':
            result = operations[3](operand1, operand2); 
            break;
        default:
            printf("Невідомий оператор. Доступні оператори: +, -, *, /\n");
            return 1;
    }

  
    printf("Результат: %.2f\n", result);

    return 0;
}
