// Сделать отрисовку символами геометрического изображения на экране, используя двумерные массивы.  Фигуры должны включать в себя: круг, прямоугольник, линия.
// Использовать цвета в консоли. Реализовать вывод пейзажа. Домик, дерево, солнышко, земля, небо, ...
// Реализовать бесконечную анимацию пейзажа (например, идущий снег или дождь, облачка, бегущие по небу и т.п.) 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void printRectangle(int h_limit, int v_limit) {

    char horizontal[h_limit]; 
    char vertical[v_limit];   


    for (int i = 0; i < h_limit; i++) {
        horizontal[i] = '-';
    }
  
    for (int i = 0; i < v_limit; i++) {
        vertical[i] = '|';
    }
    
    printf("%s\n", horizontal);

    for (int i = 0; i < v_limit; i++) {
        printf("%c", vertical[i]); 
        for (int j = 0; j < h_limit-2; j++) { 
            printf(" ");
        }
        printf("%c\n", vertical[i]); 
    }


    printf("%s\n", horizontal);
}


void printLine(int height){
    for (int i = 0; i<height; i++){
        printf("-");
    }
}

void house(int d) {
    for(int i = 0; i < d; i++) {

        for(int j = 0; j < d -i ; j++) {
            printf(" ");
        }
        printf("**"); 
        printf("\n");
    
    }
}


void printCircle(int radius) {
    for (int y = radius; y >= -radius; y--) {
        for (int x = -radius; x <= radius; x++) {
            if ((x * x + y * y) <= (radius * radius)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    // printRectangle(10, 3); 
    // printLine(20);
    // house(25);
    // printCircle(10);

    return 0;
}
