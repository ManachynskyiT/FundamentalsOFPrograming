#include <stdio.h>
#include <stdlib.h>

int* toPoint(int x, int y) {
    
    int* point = (int*)malloc(2 * sizeof(int));

   
    if (point == NULL) {
        printf("Помилка виділення пам'яті\n");
        return NULL;
    }

    
    point[0] = x;  
    point[1] = y;  

    return point; 
}

int main() {
    int x = 4, y = 4;

    
    int* point = toPoint(x, y);


    if (point != NULL) {
       
        printf("Координати точки: (%d, %d)\n", point[0], point[1]);

        
        printf("Вказівник на точку: %p\n", (void*)point);

        
        free(point);
    } else {
        printf("Не вдалося створити точку.\n");
    }

    return 0;
}
