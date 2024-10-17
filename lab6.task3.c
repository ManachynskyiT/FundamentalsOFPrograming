#include <stdio.h>
#include <float.h>  

int main() {
    int N;
    float sum = 0, num, min = FLT_MAX, max = FLT_MIN;
    

    do {
        printf("Введіть ціле число N (від 7 до 12): ");
        scanf("%d", &N);
    } while (N < 7 || N > 12);

    
    for (int i = 0; i < N; i++) {
        printf("Введіть число %d: ", i + 1);
        scanf("%f", &num);
        sum += num;
        if (num < min) min = num;
        if (num > max) max = num;
    }
    
    
    float average = sum / N;

    
    printf("\nСума: %.2f\n", sum);
    printf("Середнє арифметичне: %.2f\n", average);
    printf("Мінімальне значення: %.2f\n", min);
    printf("Максимальне значення: %.2f\n", max);
    
    return 0;
}
