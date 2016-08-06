# CS-50-edx
computer science 50 in edx
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float cash;
    int count;
    int amount;
    
    do
    {
        printf("O hai! How much change is owed?\n");
        cash = GetFloat();
    }
    
    while(cash <= 0);
    amount = roundf(cash*100);
    count = 0;
    
    while(amount >= 25)
    {
        count++;
        amount =amount-25;
    }
    
    while(amount >= 10)
    {
        count++;
        amount =amount-10;
    }
    
    while(amount >= 5)
    {
        count++;
        amount =amount-5;
    }
    
    while(amount >= 1)
    {
        count++;
        amount =amount-1;
    }
    printf("%d\n", count);
    
    return 0;
}
