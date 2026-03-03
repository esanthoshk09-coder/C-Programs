#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float a,b,c,disc,root1,root2,realp,imgp;
    printf("Enter the coefficient of a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a == 0)
    {
        printf("The coefficient of a must be non zero:\n");
        return 0;
    }
    disc=b*b-4*a*c;
    if(disc > 0)
    {
        root1 = (-b+sqrt(disc))/(2*a);
        root2 = (-b-sqrt(disc))/(2*a);
        printf("the real and distinct:\n");
        printf("Root1 = %.2f\n Root2 = %.2f\n",root1,root2);
    }
    else if (disc == 0)
    {
        root1 = -b/(2*a);
        printf("The roots are equal:\n");
        printf("Root1 = Root2 = %.2f\n",root1);
    }
    else
    {
        realp = -b/(2*a);
        imgp = sqrt(disc)/(2*a);
        printf("The roots are imaginary:\n");
        printf("Root1 = %.2f + i%.2f\n",realp,imgp);
        printf("Root2 = %.2f - i%.2f\n",realp,imgp);
    }
    return 0;
}
