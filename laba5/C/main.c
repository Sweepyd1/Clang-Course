#include <stdio.h>

#define ARRAY_SIZE 256

int main() {
    int count_numbers = 0;
    int count_space = 0;
    int count_other = 0;
    int total_count = 0; 
    int array[ARRAY_SIZE] = {0}; 
    int c;

  
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') { 
            count_numbers++;
        } else if (c == ' ') {
            count_space++;
        } else { 
            count_other++;
        }

        array[c]++; 
        total_count++; 
    }

   
    printf("Character Categories:\n");
    printf("Count of numbers: %d\n", count_numbers);
    printf("Count of spaces: %d\n", count_space);
    printf("Count of other characters: %d\n", count_other);
    
   
    printf("\nCharacter Statistics:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] > 1) { 
            int percentage = (array[i] * 100) / total_count; 
            printf("%d ('%c') %d%% ", i, i, percentage);
            
           
            for (int j = 0; j < percentage; j += 3) { 
                putchar('#'); 
            }
            putchar('\n');
        }
    }
    
 
    
    return 0;
}