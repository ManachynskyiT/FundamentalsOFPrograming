#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50


typedef struct {
    int number;        
    char surname[MAX_NAME_LENGTH];  
    char name[MAX_NAME_LENGTH];    
} Participant;


int compareParticipants(const void *a, const void *b) {
    Participant *participantA = (Participant *)a;
    Participant *participantB = (Participant *)b;

    
    return strcmp(participantA->name, participantB->name);
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

 
    qsort(participants, countMembers, sizeof(Participant), compareParticipants);

    
    printf("\nСписок учасників (відсортований за іменами):\n");
    for (int i = 0; i < countMembers; i++) {
        printf("%d - %s - %s\n", participants[i].number, participants[i].name, participants[i].surname);
    }

    return 0;
}
