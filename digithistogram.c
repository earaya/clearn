#include <stdio.h>

/* Count digits, whitespace, other chars. */

main()
{
    int c, i, j, nwhite, nother;
    /* Array for 0 to 9, whitespace, other */
    int ndigit[10];

    /*  We have to initialize the array. C makes no guarantees about the
        state of the memory. */
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    /*  Note we don't have to use curly brackets; it's all one big,
        multi-lne statement. */
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            /* chars are small ints, so we can do arithmetic on it.*/
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    for (i = 0; i < 10; ++i) {
        for (j = 0; j < ndigit[i]; ++j)
            printf("#");
        printf("\n");
    }
}