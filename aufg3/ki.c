#include <stdio.h>
#include "ki.h"
#include "kstruct.h"

void eingabe(struct komplex *z) {

	printf("Realteil: ");
	scanf("%lf", &z->real);
	printf("Imaginaerteil: ");
	scanf("%lf", &z->imag);
}