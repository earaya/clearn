#include <stdio.h>

/* We need to be aware we may find lines longer than 1000 chars. */
#define MAXLINE 1000

int readline(char s[], int limit);
void copy(char from[], char to[]);

/* Print longest input line */
main()
{
    int currentLength;
    int maxLength;
    char currentLine[MAXLINE];
    char longestLine[MAXLINE];

    maxLength = 0;
    while ((currentLength = readline(currentLine, MAXLINE)) > 0)
        if (currentLength > maxLength) {
            maxLength = currentLength;
            copy(currentLine, longestLine);
        }
        if(maxLength > 0)
            printf("%s", longestLine);
        return 0;
}

/* We make getline safe by capping at limit. */
int readline(char s[], int limit)
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    /* NULL terminate the string. */
    s[i] = '\0';
    return i;
}

/* Unlike other types, we get the address of the array, not the value. */
void copy(char from[], char to[])
{
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}