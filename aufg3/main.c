#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#include "kstruct.h"
#include "kio.h"
#include "save.h"

int main(void) {
	FILE *fp;
	int op;
	struct komplex k1, k2, k3, k4;
	printf("Erste Komplexe Zahl:\n");
	eingabe(&k1);
	printf("\nZweite Komplexe Zahl:\n");
	eingabe(&k2);
	printf("\nDritte Komplexe Zahl:\n");
	eingabe(&k3);
	
	if ((fp = fopen("test.txt", "r+")) != NULL) {
		//ZAHLEN SPEICHERN
		save(fp, &k1);
		save(fp, &k2);
		save(fp, &k3);
		//ZAHL AUSGEBEN
		printf("Welche Zahl ausgeben? 1-3\n");
		scanf("%d", &op);
		read(fp, op);
		//ZAHL AENDERN
		printf("\n\nWelche Zahl aendern? 0 - Keine, 1-3\n");
		scanf("%d", &op);
		printf("\nNeu\nRealteil: ");
		scanf("%lf", &k4.real);
		printf("Imaginaerteil: ");
		scanf("%lf", &k4.imag);
		edit(fp, op, &k4);
		//ZAHLEN ERNEUT AUSGEBEN
		printf("\nNeue Zahlen:\n");
		read(fp, 1);
		printf("\n");
		read(fp, 2);
		printf("\n");
		read(fp, 3);

		fclose(fp);
	}
	else printf("Fehler beim Oeffnen der Datei!");
	

	printf("\n\n");
	system("PAUSE");
}