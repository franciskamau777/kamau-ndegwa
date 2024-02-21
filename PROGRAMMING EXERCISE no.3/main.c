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

    printf("Miles\tKilometers\n");

    int miles = start;
    while (miles <= end) {
        double kilometers = miles * 1.60934;
        printf("%d\t%.2f\n", miles, kilometers);
        miles += increment;
    }
    return 0;
}
