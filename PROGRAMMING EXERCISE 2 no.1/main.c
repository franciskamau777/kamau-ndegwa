#include <stdio.h>
#include <stdlib.h>

int main()
{
  int start, end, increment;

    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);
    printf("Enter the increment value: ");
    scanf("%d", &increment);

    printf("Fahrenheit\tCelsius\n");

    int fahrenheit = start;
    while (fahrenheit <= end) {
        int celsius = (fahrenheit - 32) * 5 / 9;
        printf("%d\t\t%d\n", fahrenheit, celsius);
        fahrenheit += increment;
    }

    return 0;
}

