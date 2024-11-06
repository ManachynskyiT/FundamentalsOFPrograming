#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void findMinMaxAndSum(int arr[], int size, int* min, int* max, int* sum) {
    *min = arr[0];
    *max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
    
    *sum = *min + *max;
}

int main() {
    int arr[20];
    int min, max, sum;
    
    srand(time(NULL));  
    
  
    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 100;  
        printf("%d ", arr[i]);  
    }
    printf("\n");
    
   
    findMinMaxAndSum(arr, 20, &min, &max, &sum);
    
    
    printf("Мінімальний елемент: %d\n", min);
    printf("Максимальний елемент: %d\n", max);
    printf("Сума мінімального і максимального елементів: %d\n", sum);
    
    return 0;
}
