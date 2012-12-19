#include <stdio.h>

/*  Define some constants. Note the pre-processor will replace occurences
    of these constants in the code for the values defined here. */
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
        /* Celsius: 4 wide, no decimal places. Fahr: 6 wide, one decimal. */
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius += STEP;
    }
}