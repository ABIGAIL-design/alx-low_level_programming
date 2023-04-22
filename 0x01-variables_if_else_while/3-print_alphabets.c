#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - alphabet in lowercase
 * Description: alphabet in lowercase
 * Return: 0
 */
int main(void)
{
int n  = 97;
int m = 65;

while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 90)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
