# CS-50-edx
computer science 50 in edx
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    
    do {
        printf("Height: ");
        height = GetInt();
    }
    while ((height < 0) || (height > 23));
    
    for (int row = 1; row <= height; row++)
    {
        for (int None = (height - row); None > 0; None--)
        {
            printf(" ");
        }
        for (int hash = 1; hash <= (row + 1); hash++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
