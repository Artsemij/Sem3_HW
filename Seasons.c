#include <stdio.h>

int main(int argc, char **argv) 
{
    
int month;
    printf("Input number of month: ");
    scanf("%d", &month);
    
    // Определяем время года по номеру месяца
    if (month == 12 || month <= 2) {
        printf("winter\n");
    } else if (month <= 5) {
        printf("spring\n");
    } else if (month <= 8) {
        printf("summer\n");
    } else {
        printf("autumn\n");
    }

    return 0;
}