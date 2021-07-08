#include <stdio.h>

void swap (int* a, int*b)
{
    if(a && b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
    return;
}


int main(void)
{
    int a,b;
    printf("Hello World"\n );
    a=5;b=10;
    swap(&a,&b);
    return 0;
}
