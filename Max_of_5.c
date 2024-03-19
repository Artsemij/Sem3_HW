#include <stdio.h>

int main(int argc, char **argv) 
{
int num1, num2, num3, num4, num5;
printf("Input numbers: ");
scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

int max = num1;
if (num2 > max) {
max = num2;
}
if (num3 > max) {
max = num3;
}
if (num4 > max) {
max = num4;
}
if (num5 > max) {
max = num5;
}

printf("%d\n", max);

return 0;
}