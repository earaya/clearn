#include <stdio.h>

/*  Function must be declared before use. Function prototype must match
    function definition. */
int power(int m, int n);

/*  Excercise power function. */
main()
{
    printf("%d\n", power(2, 5));
    return 0;
}

int power(int base, int n)
{
    int i, p;

    p = 1;
    for(i = 1; i <= n; ++i)
        p *= base;

    return p;
}