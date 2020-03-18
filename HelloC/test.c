#include <stdio.h>

void increment(int *val)
{
    (*val)++;
}
int main()
{
    printf("Hi There !\n");

    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}
