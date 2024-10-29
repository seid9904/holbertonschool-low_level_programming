#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);  // Output the initial value of n
    reset_to_98(&n);      // Call the function to update the value
    printf("n=%d\n", n);  // Output the updated value of n
    return (0);
}
