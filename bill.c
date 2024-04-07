#include<stdio.h>

int main(void)
{
    // Write a program that takes user input value of US dollar bill, then shows how to pay using the smallest amount of $20, $10, $5, $1

    int input, twen_bill, ten_bill, five_bill, one_bill;

    printf("Enter dollar amount: ");
    scanf("%d", &input);

    twen_bill  = input/20;
    input = input - twen_bill * 20;
    
    ten_bill = input/10;
    input = input - ten_bill * 10;

    five_bill = input/5;
    input = input - five_bill * 5;

    one_bill = input/1;

    printf("$20 bills: %d \n", twen_bill);
    printf("$10 bills: %d  \n", ten_bill);
    printf("$5 bills: %d  \n", five_bill);
    printf("$1 bills: %d  \n", one_bill);



}