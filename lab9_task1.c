#include <stdio.h>
#include <string.h>

#define MAX_LEN 500     // Максимальна довжина введеного рядка
#define MAX_WORDS 50    // Максимальна кількість слів у рядку

void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char input[MAX_LEN];
    char* words[MAX_WORDS];
    int wordCount = 0;

   
    printf("Введіть прислів'я або афоризм (щонайменше 7 слів): ");
    fgets(input, MAX_LEN, stdin);

    
    input[strcspn(input, "\n")] = 0;

   
    char* token = strtok(input, " ");
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    
    if (wordCount < 7) {
        printf("Введіть щонайменше 7 слів.\n");
        return 1;
    }

   
    for (int i = 0; i < wordCount; i++) {
        reverseString(words[i]);
        printf("%s\n", words[i]);
    }

    return 0;
}
