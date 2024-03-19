#include <stdio.h>

int main(int argc, char **argv) 
{
int num1, num2, num3;
    printf("Input numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num2 < num3) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}