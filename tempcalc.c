#include <stdio.h>

#define MIN_TEMP    -100
#define MAX_TEMP    100
#define STEP        10

/* Print Celsius & Farenheit Temp Table */

main()
{
    float celsius, fahr;

    celsius = MIN_TEMP;
    printf("%s\t%s\n", "C", "F");
    while(celsius <= MAX_TEMP) {
        /* Note: Do not multiply by 9/5; integer division truncates. */
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius += STEP;
    }
}