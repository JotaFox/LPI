#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int insert, prev, state;
    state = OUT;
    prev = ' ';

    while ((insert = getchar()) != EOF)
    {
        if (insert == '/')
            state = IN;
        if (state == IN)
        {
            if (insert == '/' && prev == '*')
                state = OUT;
        }
        else
            putchar(insert);

        prev = insert;

    }

    return 0;
}
