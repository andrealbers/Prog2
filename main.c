#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>

void eingabe(int *b)
{
	do
	{
		printf("\nEingabe b (1-20): ");
		scanf("%d", b);
	} while ((*b < 1) || (*b > 20));
}

int berechnung(int *b)
{
	int a = 200;

	while (*b >= 0)
	{
		a = a - *b;
		*b -= 1;
	}
	return a;
}

void ausgabe(int erg)
{
	printf("Das Ergebnis ist: %d", erg);
}

int main()
{
	int b, erg;
	eingabe(&b);
	erg = berechnung(&b);
	ausgabe(erg);

	printf("\n");
	system("PAUSE");
}
	