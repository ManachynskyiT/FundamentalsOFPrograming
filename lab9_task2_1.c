#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50


typedef struct {
    int number;        
    char surname[MAX_NAME_LENGTH];  
    char name[MAX_NAME_LENGTH];    
} Participant;


int isUniqueName(Participant participants[], int count, const char* name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(participants[i].name, name) == 0) {
            return 0;  
        }
    }
    return 1; 
}

int main() {
    int countMembers;

    
    printf("Введіть кількість учасників (10+): ");
    scanf("%d", &countMembers);

   
    if (countMembers < 10) {
        printf("Кількість учасників повинна бути не менше 10.\n");
        return 1;
    }

  
    Participant participants[countMembers];

  
    printf("Введіть список учасників (формат: Номер Прізвище Ім’я):\n");
    getchar(); 

    for (int i = 0; i < countMembers; i++) {
        char line[100];  
        printf("Учасник %d: ", i + 1);
        if (fgets(line, sizeof(line), stdin) == NULL) {
            printf("Помилка при введенні.\n");
            return 1;
        }

     
        if (sscanf(line, "%d %49s %49s", &participants[i].number, participants[i].surname, participants[i].name) != 3) {
            printf("Невірний формат, спробуйте ще раз.\n");
            i--;
            continue;
        }
    }

    
    int uniqueNamesCount = 0;
    for (int i = 0; i < countMembers; i++) {
        if (isUniqueName(participants, i, participants[i].name)) {
            uniqueNamesCount++;
        }
    }

   
    int totalSurnameLength = 0;
    for (int i = 0; i < countMembers; i++) {
        totalSurnameLength += strlen(participants[i].surname);
    }
    double averageSurnameLength = (double)totalSurnameLength / countMembers;

   
    printf("\nСписок учасників:\n");
    for (int i = 0; i < countMembers; i++) {
        printf("%d - %s %s\n", participants[i].number, participants[i].surname, participants[i].name);
    }

    printf("\nКількість різних імен: %d\n", uniqueNamesCount);
    printf("Середня довжина прізвищ: %.2f\n", averageSurnameLength);

    return 0;
}
