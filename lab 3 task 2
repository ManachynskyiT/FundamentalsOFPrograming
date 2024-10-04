#include <stdio.h>

int main() {
    char surname[50], initials[10], email[50];
    int count = 0;

    printf("Введіть кількість студентів: ");
    scanf("%d", &count);

    printf("Таблиця групи:\n");
    printf("%-5s %-20s %-30s %-20s\n", "Nº", "Прізвище, Ініціали", "Ел.пошта");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("Введіть Прізвище: ");
        scanf("%s", surname);
        printf("Введіть Ініціали: ");
        scanf("%s", initials);
        printf("Введіть Ел.пошту: ");
        scanf("%s", email);
        printf("%-5d %-20s %-30s %-20s\n", i + 1, surname, initials, email);
    }
       return 0;
}
