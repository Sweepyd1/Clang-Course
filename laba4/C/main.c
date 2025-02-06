#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int c;
    int char_count = 0; 
    int line_count = 0; 
    int count_word = 0;

    bool is_word = false;

    while ((c = getchar()) != EOF) {
        char_count++; 

     
        if (c == '\n') {
            line_count++; 
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            if (is_word) {
                count_word++; 
                is_word = false; 
            }
        } 
        else {
            is_word = true; 
        }
    }

 
    if (is_word) {
        count_word++;
    }
    printf("\n");
    printf("Lines: %d\n", line_count);      
    printf("Characters: %d\n", char_count); 
    printf("Words: %d\n", count_word);  

    return 0;
}