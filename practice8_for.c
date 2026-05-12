#include <stdio.h>

int main(void)
{
    int dan, i;
    printf("Enter your dan : ");
    scanf("%d", &dan);
    for(i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", dan, i, dan * i);
    }
    return 0;
}
