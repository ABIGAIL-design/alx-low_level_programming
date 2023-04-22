#include <stdio.h>
/**
 * main - entry point
 * description - print three numbers
 * Return: 0
 */
int main(void)
{
int n = '0';
int m = '0';
int l = '0';

while (m <= '8')
{
while (l <= '9')
{
if (n < m && m < l)
{
putchar(n);
