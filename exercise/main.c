#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the first value:");
    scanf("%d",&a);
    printf("Enter the second value:");
    scanf("%d",&b);
    printf("Enter the third value:");
    scanf("%d",&c);
    int sum =a+b+c;
    printf("%d+%d+%d = %d\n",a,b,c,sum);
    return 0;
}
