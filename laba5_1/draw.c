#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "draw.h"

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


void drawDiagonal(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void drawHouse(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j >= (width / 2) - i && j <= (width / 2) + i && i < height / 2) {
                printf("*");
            } else if (i >= height / 2) { 
                if(j == 0 || j == width - 1 || i == height -1) {
                     printf("*");
                 } else {
                      printf(" ");
                 }
            }
             else {
                printf(" ");
            }

        }
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


void rainAnimation(int width, int height, int drops) {
    char screen[height][width];

    while (1) {

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                screen[i][j] = ' ';
            }
        }


        for (int i = 0; i < drops; i++) {
            int x = rand() % width;
            screen[0][x] = '/';
        }



        for (int i = height - 1; i > 0 ; i--) {
            for (int j = 0; j < width; j++) {
                screen[i][j] = screen[i - 1][j];
            }
        }



        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                printf("%c", screen[i][j]);
            }
            printf("\n");
        }

        usleep(100000); 

        system("clear"); 

    }

}
