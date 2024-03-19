#include <stdio.h>

int main(int argc, char **argv) 
{
int num1, num2, num3, num4, num5;
    printf("Input numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    int min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    if (num4 < min) {
        min = num4;
    }
    if (num5 < min) {
        min = num5;
    }

    printf("%d\n", min);

    return 0;
}