#include <stdio.h>

int* getElementAtIndex(int arr[], int index) {
    if (index >= 0 && index < 10) {
        return &arr[index];  
    }
    return NULL;  
}
int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 5;
    int* elementPtr = getElementAtIndex(arr, index);
    
    if (elementPtr != NULL) {
        printf("Елемент за індексом %d: %d\n", index, *elementPtr);
    } else {
        printf("Елемент з індексом %d не існує.\n", index);
    }
    
    return 0;
}
