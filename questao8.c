#include <stdio.h>
#include <stdlib.h>

#define TAM_VETOR 5

int main(int argc, char *argv[])
{
    int *vetor1, *vetor2;
    int idx;

    vetor1 = (int*) malloc(TAM_VETOR * sizeof(int));
    vetor2 = (int*) malloc(TAM_VETOR * sizeof(int));

    for (idx = 0; idx < TAM_VETOR; idx++)
    {
        printf("Posição [%d]: ", idx);
        scanf("%d", vetor1+idx);
        vetor2[idx] = vetor1[idx]*3;
    }

    for (idx = 0; idx < TAM_VETOR; idx++)
    {
        printf("Vetor1 [%d]: %d\n", idx, vetor1[idx]);
        printf("Vetor2 [%d]: %d\n", idx, vetor2[idx]);
    }

    free(vetor1);
    free(vetor2);

    return 0;
}