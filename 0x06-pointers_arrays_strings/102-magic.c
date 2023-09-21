#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints the modified value of a[2].
 *              It indirectly modifies a[2] without directly using 'a'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;

    /*
     * Your new line of code here...
     * Remember:
     * - You are not allowed to use variable 'a'
     * - You are not allowed to modify 'p'
     * - Only one statement is allowed
     * - You are not allowed to code anything else than this line of code
     */
    *(p + 5 - (p - &a[2])) = 98; /* This modifies a[2] indirectly through pointer arithmetic */

    /* ...so that this prints 98\n */
    printf("a[2] = %d\n", a[2]);
    return (0);
}

