#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char input[100];
    printf("Введіть рядок: ");
    fgets(input, sizeof(input), stdin);

    // Видаляємо символ нового рядка, якщо він присутній
    if (input[stringLength(input) - 1] == '\n') {
        input[stringLength(input) - 1] = '\0';
    }

    printf("Довжина рядка: %d\n", stringLength(input));
    return 0;
}
