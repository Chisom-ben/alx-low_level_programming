#include <stdio.h>

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j <= i; j++)
{
putchar('#');
}
putchar('\n');
}
}
