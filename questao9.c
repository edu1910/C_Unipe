#include <stdio.h>

void printstr(const char* string)
{
    int idx = 0;

    while (*(string+idx) != '\0')
    {
        printf("%c\n", *(string+idx));
        idx++;
    }
}

int main(int argc, char *argv[])
{
    char str[] = "Teste!";
    printstr(str);
    return 0;
}