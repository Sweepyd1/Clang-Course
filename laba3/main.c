#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_time = clock(); 

    printf("hello world!\n");
    printf("%s\t %s\t %s\n", "Цельсии", "Фаренгейты", "Кельвины");

    for (int i = 0; i <= 100; i += 10) {
        float celsius = (float)i;
        float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        float kelvin = celsius + 273.15;

        // Print values with tabulation
        printf("%.1f\t %.1f\t %.1f\n", celsius, fahrenheit, kelvin);
    }

    clock_t end_time = clock();
    double dur_time = (double)(end_time - start_time); 
    printf("Время выполнения: %.6f секунд\n", dur_time);

    return 0;
}