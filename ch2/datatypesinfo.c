/* Note: The C90 standard doesn't specify a fixed size for integral types.
The only requirement is that sizeof(short) <= sizeof(int) <= sizeof(long).
If you need to know what your compiler and architecture have chosen for your types,
you can look at various constants in limits.h.

Below are a few samples of this. */

#include <stdio.h>
#include <limits.h>

main()
{
    printf("Number of bits in a CHAR: %i\n", CHAR_BIT);
    printf("sizeof(char) in bytes: %lu\n", sizeof(char));
    printf("CHAR_MAX: %i; CHAR_MIN: %i\n", CHAR_MAX, CHAR_MIN);
    printf("UCHAR_MAX: %i\n", UCHAR_MAX);

    printf("=============================\n");

    printf("sizeof(int) in bytes: %lu\n", sizeof(int));
    printf("INT_MAX: %i; INT_MIN: %i\n", INT_MAX, INT_MIN);
    printf("UINT_MAX: %u\n", UINT_MAX);
}
