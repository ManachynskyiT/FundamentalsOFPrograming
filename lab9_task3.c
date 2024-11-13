#include <stdio.h>
#include <string.h>
#include <regex.h>

int validate_email(const char *email) {
   
    const char *pattern = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}(\\.[a-zA-Z]{2,})?$";
    regex_t regex;

  
    if (regcomp(&regex, pattern, REG_EXTENDED) != 0) {
        return 0; 
    }

    
    int result = regexec(&regex, email, 0, NULL, 0);

   
    regfree(&regex);


    return result == 0;
}

int main() {
    char email[100];

    printf("Введіть електронну адресу: ");
    scanf("%99s", email);

    if (validate_email(email)) {
        printf("Правильна електронна адреса.\n");
    } else {
        printf("Неправильна електронна адреса.\n");
    }

    return 0;
}
