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

    printf("Pounds\tKilograms\n");

    int pounds = start;
    while (pounds <= end) {
        double kilograms = pounds * 0.453592;
        printf("%d\t%.2f\n", pounds, kilograms);
        pounds += increment;
    }
    return 0;
}
