#include <stdio.h>

int main(int argc, char *argv[])
{
    int vet[] = {-1,0,-2};
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("[%X][%i]\n", vet+i, *(vet+i));
    }

    return 0;
}