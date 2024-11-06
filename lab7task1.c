#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

int main() {
    int arr[10];
    
    srand(time(NULL)); 
    
    generateRandomArray(arr, 10);
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
