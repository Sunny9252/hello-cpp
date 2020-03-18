#include <stdio.h>

void update(int *a, int *b)
{
    // Complete this function
    int absolute = (*a) - (*b);
    int plus = (*a) + (*b);

    (*a) = plus; //plus: a+b

    if (absolute < 0) //if absolute is minus
    {
        (*b) = absolute * (-1);
    }
    else
    {
        (*b) = absolute;
    }
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}