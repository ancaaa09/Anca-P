//3. Se citesc de la tastatura tastatura N numere intregi.Sa se verifice folosind DOAR stive daca numerele respective
//sunt palindroame, iar numere care sunt palindroame vor fi introduce intr - o stiva.La sfarsit se va afisa continutul stivei
//respective.Cerinta de implementare : Se va implementa o singura metoda de Push/Pop/Peek , se va stii pe care
//stiva se lucreaza transmitand parametrii prin referinta.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 100

int isEmpty(int* stack, int* top)
{

    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull(int* stack, int* top)
{
    if (top == MAX_LENGTH - 1)
        return 1;
    else
        return 0;

}

int Push(int val, int* stack, int* top)
{
    if ((*top) == MAX_LENGTH - 1)
        printf("stack overflow \n");
    else
    {
        ++(*top);
        *(stack + *top) = val;
    }

}


int Palindrom(int n)
{
    int aux;
    int invers = 0;
    aux = n;
    while (aux)
    {
        invers = invers * 10 + aux % 10;
        aux = aux / 10;
    }
    if (invers == n)
        return 1;
    else
        return 0;
}

int main()
{
    int  i,val, stack,top;
    int n, invers = 0, aux;
    stack = (int*)malloc(MAX_LENGTH *sizeof(int));
    top = (int*)malloc(sizeof(int));
    top = -1;
    printf(" Introduceti numarul n de la tastatura: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        if (Palindrom(n))
            push(val, stack, top);
        else
            printf("Nu este palindrom \n");
    }
    system("pause");
    return 0;
}