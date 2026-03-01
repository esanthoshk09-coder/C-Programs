#include<stdio.h>
int main()
{
    char operator;
    double num1,num2,result;
    printf("Enter the operator(+,-,*,/):\n");
    scanf("%c",&operator);
    printf("Enter the two numbers:\n");
    scanf("%lf%lf",&num1,&num2);
    switch(operator)
    {
        case '+':  result = num1 + num2;
                   printf("Result: %.2lf\n +%.2lf\n = %.2lf\n",num1,num2,result);
                   break;

        case '-':  result = num1 - num2;
                   printf("Result: %.2lf\n -%.2lf\n = %.2lf\n",num1,num2,result);
                   break;

        case '*':  result = num1 * num2;
                   printf("Result: %.2lf\n *%.2lf\n = %.2lf\n",num1,num2,result);
                   break;

        case '/':  if(num2 != 0)
                   {
                    result = num1 / num2;
                   printf("Result: %.2lf\n /%.2lf\n = %.2lf\n",num1,num2,result);
                   break;
                   }
                   else
                   {
                       printf("Error!!!");
                   }
                   break;
                   default:printf("Error:invalid operator");
                   break;
    }
    return 0;
}
