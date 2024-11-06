#include <stdio.h>

int* getElementAtIndices(int arr[12][12], int row, int col) {
    if (row >= 0 && row < 12 && col >= 0 && col < 12) {
        return &arr[row][col]; 
    }
    return NULL; 
}

int main() {
    int arr[12][12] = { {0} };  
    int row = 5, col = 7;
    arr[row][col] = 42;  
    
    int* elementPtr = getElementAtIndices(arr, row, col);
    
    if (elementPtr != NULL) {
        printf("Елемент за індексами [%d][%d]: %d\n", row, col, *elementPtr);
    } else {
        printf("Елемент з індексами [%d][%d] не існує.\n", row, col);
    }
    
    return 0;
}
