#include <stdio.h>

void swap (int* a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}


int main(void)
{
    printf("Hello World"\n );
    return 0;
}