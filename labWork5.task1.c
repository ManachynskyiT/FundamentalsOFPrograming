#include <stdio.h>

int main() {
    int num1, num2;


    printf("Введіть перше число: ");
    scanf("%d", &num1);
    
    printf("Введіть друге число: ");
    scanf("%d", &num2);

    
    (num1 > num2) ? printf("%d більше ніж %d\n", num1, num2) :
    (num1 < num2) ? printf("%d менше ніж %d\n", num1, num2) :
                    printf("%d дорівнює %d\n", num1, num2);

    return 0;
}
