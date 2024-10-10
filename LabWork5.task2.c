#include <stdio.h>

int isAcuteTriangle(int a, int b, int c) {
    int max_side = a;
    if (b > max_side) {
        max_side = b;
    }
    if (c > max_side) {
        max_side = c;
    }

    if (max_side == a) {
        return (a * a < b * b + c * c);
    } else if (max_side == b) {
        return (b * b < a * a + c * c);
    } else {
        return (c * c < a * a + b * b);
    }
}


int isRightTriangle(int a, int b, int c) {
    int max_side = a;
    if (b > max_side) {
        max_side = b;
    }
    if (c > max_side) {
        max_side = c;
    }

    if (max_side == a) {
        return (a * a == b * b + c * c);
    } else if (max_side == b) {
        return (b * b == a * a + c * c);
    } else {
        return (c * c == a * a + b * b);
    }
}

int main() {
    int num1, num2, num3, exist;

    printf("Введіть перше число: ");
    scanf("%d", &num1);

    printf("Введіть друге число: ");
    scanf("%d", &num2);

    printf("Введіть третє число: ");
    scanf("%d", &num3);

   
    exist = (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1) ? 1 : 0;

    if (exist == 1) {
      
        if (num1 == num2 && num2 == num3) {
            printf("Даний трикутник рівносторонній\n");
        } else if (num1 == num2 || num1 == num3 || num2 == num3) {
            printf("Даний трикутник є рівнобедрений.\n");
        } else {
            printf("Даний трикутник різносторонній\n");
        }

      
        if (isAcuteTriangle(num1, num2, num3)) {
            printf("Даний трикутник гострокутний\n");
        } else if (isRightTriangle(num1, num2, num3)) {
            printf("Даний трикутник є прямокутний\n");
        } else {
            printf("Даний трикутник тупокутний\n");
        }
    } else {
        printf("Трикутник не існує\n");
    }

    return 0;
}
