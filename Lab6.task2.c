#include <stdio.h>

int main() {
    int sum = 0;
    int counter = 1;

    while (counter <= 100) {
        if (counter == 17 || counter == 33) {
            counter++;  
            continue;
        }
        sum += counter;
        counter++;
    }

    printf("Сума перших 100 чисел (без 17 та 33): %d\n", sum);

    return 0;
}
