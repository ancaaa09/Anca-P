//7. Se da un numar natural N.Sa se afiseze suma bitiilor fiecarui numar de la 1 la N.
//Ex: N = 4
//1 – 0001
//2 – 0010
//3 – 0011
//4 – 0100
//Result - 5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, a, s = 0;
	printf("Introduceti numarul:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		
		a = i;

		
		while (a)
		{
			if (a % 2 == 1)
			{
				s++;
			}
			a = a / 2;
		}

	}

	printf("Suma bitilor este:%d\n", s);

	system("pause");
	return 0;
}