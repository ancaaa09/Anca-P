//4.Sa se realizeze o implementare de stiva FARA a ne folosii
//de variabile globale iar TOATE variabilele trebuiesc sa fie
//pointeri. Stiva este de numere intregi.Se va introduce in
//stiva 7 numere de tip intreg. - Sunt necesare toate metodele
//(de verificat plin / gol / peek / push / pop)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void afisare(int* stack, int* top)
{
	int i;
	for (i = 0; i <= *top; i++)
	{
		printf("%d ", *(stack + i));
	}
	
}
int isEmpty(int *stack, int *top)
{
	
	if (top == -1)
		return 1;
	else
		return 0;
}

int isFull(int *stack, int *top)
{
	if (top == MAX_SIZE-1)
		return 1;
	else
		return 0;

}
int peek(int* stack, int* top)
{
	return *(stack + *top);
}
int push(int *val, int *top, int *stack )
{
	if (isFull(stack, top))
	{
		printf("Este plin \n");
		
	}
	else
	{
		*(top++);
		*(stack + *top) = *val;
	}
}
int pop(int* top, int* stack)
{
	if (isEmpty(stack, top))
	{
		printf("Este gol \n");
		return 0;
	}
	else
	{
		int* popVal = *(stack + *top);
		*(top--);
		return *popVal;
	}
}


int main()
{
	int* stack, * top, * opt, * val, * popVal;
	stack = (int*)malloc(MAX_SIZE * sizeof(int));
	top = (int*)malloc(sizeof(int));
	val = (int*)malloc(sizeof(int));
	opt = (int*)malloc(sizeof(int));
	popVal = (int*)malloc(sizeof(int));
	*top = -1;
	do {
		printf("\n1.isEmpty\n");
		printf("2.isFull\n");
		printf("3.Push\n");
		printf("4.Peek\n");
		printf("5.Pop\n");
		printf("6.Afisare\n");
		printf("0.Exit\n");
		printf("Alegeti o optiune:"); scanf("%d", opt);

		switch (*opt)
		{
		
		case 1:if (isEmpty(stack, top))
			{
				printf("Este gol!\n");
			}
			else
			{
				printf("Se poate folosi\n");
			}
			break;
		case 2:
			if (isFull(stack, top))
			{
				printf("Este plin!\n");
			}
			else
			{
				printf("Mai este loc\n");
			}
			break;		
		
		case 3:
			printf("Valoare="); scanf("%d", val);
			push(val, stack, top);
			break;
		case 4:
			printf("Varful stivei este :%d\n", peek(stack, top));
			break;

		case 5:
			printf("Valoare functiei pop este: \n"); scanf("%d", popVal);
			pop(stack, top);

			break;
		case 6:
			afisare(stack, top);
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("Introduceti o optiune existenta de data aceasta!!! \n");
			break;
		}

		

	} while (1);
	system("pause");
	return 0;
}