#include <stdio.h>

#define IN_WORD     1 /* inside word boundaries */
#define OUT_WORD    0 /* outside a word */

/* Count the characters, words, and lines of some input */

main()
{
    /* "character" needs to be an int so we can check for EOF */
    int character, charCount, wordCount, lineCount, state;

    state = OUT_WORD;
    charCount, wordCount, lineCount = 0;

    /* != has higher precedence that = thus the parens. Also, more readable. */
    while((character = getchar()) != EOF) {
        ++charCount;
        if (character == '\n') {
            ++lineCount;
        }

        /* Whitespace finishes a word. */
        if (character == ' ' || character == '\n' || character == '\t') {
            state = OUT_WORD;
        }
        else if (state == OUT_WORD) {
            state = IN_WORD;
            ++wordCount;
        }
    }

    printf("%d %d %d\n", charCount, wordCount, lineCount);
}