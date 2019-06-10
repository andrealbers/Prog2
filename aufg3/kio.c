#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#include "kstruct.h"

void eingabe(struct komplex *k1) {
	printf("Realteil: ");
	scanf("%lf", &k1->real);
	printf("Imaginaerteil: ");
	scanf("%lf", &k1->imag);
}


