//Sa se scrie un program care insumeaza elementele intr-o metoda separata de metoda main, folosind transmiterea prin referinta.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void citire(int* v, int* n)
{
    int* i;
    printf("Inserati cele %d elemente:\n", *n);
    for (i = v; i < v + *n; i++)
        scanf("%d", i);
}

void afisare(int* v, int* n)
{
    int* i;
    for (i = v; i < v + *n; i++)
        printf("%d ", *i);
    printf("\n");
}

void suma(int* v, int* n)
{
    int* i, s = 0;
    for (i = v; i < v + *n; i++)
        s = s + (*i);
    printf("Suma elementelor vectorului este %d \n", s);
}

int main()
{
    int* v, n;
    printf("Inserati numarul de elemente ale vectorului: \n");
    scanf("%d", &n);
    v = (int*)malloc(n * sizeof(int));
    citire(v, &n);
    afisare(v, &n);
    suma(v, &n);
    system("pause");
    return 0;
}

