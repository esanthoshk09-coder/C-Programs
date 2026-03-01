#include<stdio.h>
int main()
{
     int n,first = 0, second = 1,next,i;
     printf("Enter the two numbers:\n");
     scanf("%d",&n);
     printf("Fabonacci Series:\n");
     for(i=0;i<n:i++)
     {
         if(n<=1)
         {
             next = i;
         }
         else
         {
             next = first + second;
             first = second;
             second = next;
         }
         printf("%d",next);
     }
     printf("\n");
     return 0;
}
