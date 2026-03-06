#include <stdio.h>

int main() {
    int num, original, remainder, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        remainder = num % 10;
        fact = 1;

        for(i = 1; i <= remainder; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if(sum == original)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}
