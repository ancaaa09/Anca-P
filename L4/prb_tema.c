//5. Sa se realizeze un program care sa prezinte diferenta dintre urmatoarele: incrementarea/decrementarea valorii pointerului, precum si incrementarea/decrementarea pointerului care ia adresa index-ului "0" a unui vector oarecare.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int v[] = { 66,4,5,6,7,8,5,4,35,6 };
	int* p;
	p = &v[0];
	printf("Valoarea initiala este: %d \n", *p);
	printf("Incrementarea valorii pointerului %d \n", ++(*p));
	printf("Decrementarea valorii pointerului %d \n", --(*p));
	printf("Adresa initiala :%p si valoarea initiala este %d \n", p, *p);
	printf("Incrementare adresa :%p si valoarea %d \n", ++p, *p);
	printf("Decrementare adresa :%p si valoarea %d \n", --p, *p);
	printf("A 2-a decrementare a adresei : %p si valoare %d \n", --p, *p);

	system("pause");
	return 0;
}