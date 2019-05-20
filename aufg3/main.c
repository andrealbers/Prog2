#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "ki.h"
#include "kstruct.h"
#include "data.h"

void main() {
	FILE *fp;
	struct komplex Zahl1;
	struct komplex Zahl2;
	struct komplex Zahl3;
	struct komplex ergebnis;
	
	printf("Erste Zahl:\n");
	eingabe(&Zahl1);
	/*	printf("\nZweite Zahl:\n");
	eingabe(&Zahl2);
	printf("\nDritte Zahl:\n");
	eingabe(&Zahl3);
	*/
	if ((fp = fopen("ablage.bin", "wb+")) == 0) {

		printf("\n\nDatei konnte nicht geoeffnet werden!\n");
	}

	else {
		printf("\nDie Datei konnte geoeffnet werden\n");
		ksave(fp, &Zahl1);
		printf("Zahl1 wurde gespeichert!\n");
		
		fseek(fp, 0, SEEK_SET);

		while ((fread(&ergebnis, sizeof(struct komplex), 1, fp)) != NULL) {
			printf("Realteil: %lf\n", ergebnis.real);	
			printf("Imaginaerteil: %lf", ergebnis.imag);
		}
	}

	fclose(fp);
	printf("\n\n");
}
