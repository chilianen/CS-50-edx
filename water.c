#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    printf("minutes =");
    int minutes = GetInt();
    
   if (minutes > 0)
   {
       int bottles = 12*minutes;
       printf("bottles: %d\n", bottles);
   }
}
