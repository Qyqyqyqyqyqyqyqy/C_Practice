#include<stdio.h>

int main(void)
{
    int num, mid;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    mid = (num/10)%10;

    printf("The reversal is: %d%d%d", (num % 100) - mid * 10, mid ,num/100);

    return 0;
}