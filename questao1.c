#include <stdio.h>

int main(int argc, char *argv[])
{
    int a=2,b=7;
    int *p, *q;
    p = &a;
    q = &b;

    printf("%p\n", &b);
    printf("%p\n", *&q);
}