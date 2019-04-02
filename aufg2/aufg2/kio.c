#include <stdio.h>
#include "kstruct.h"
#include "kio.h"


void eingabe(struct komplex *keingeb)
{
	printf("Bitte geben Sie den Realteil ein!\n");
	scanf("%lf", &keingeb->real);

	printf("Bitte geben Sie den Imaginaerteil ein!\n");
	scanf("%lf", &keingeb->imag);
}

void ausgabe(struct komplex *kausg, char operation[])
{
	printf("Die Operation %s liefert das Ergebnis:\nRealteil:      %8.2lf\nImaginaerteil: %8.2lfj", operation, kausg->real, kausg->imag);
	printf("\n\n");
}