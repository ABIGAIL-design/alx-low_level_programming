#include <stdio.h>
/**
 * main - entry point
 * description - print three numbers
 * Return: 0
 */
int main(void)
{
        int i, j;
                for (i = 0; i <= 99; i++)
                {
                        for (j = 0; j <= 99; j++)
                        {
                                if (i < j && i != j)
                                {
                                        putchar((i / 10) + '0');
                                        putchar((i % 10) + '0');
