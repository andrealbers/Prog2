/*
Entwickeln Sie ein strukturiertes und gut kommentieretes Programm für nachstehende Aufgabenstellung:
Für eine von der Tastatur einzugebende vorzeichenlose Dezimalzahl im Wertebereich
0 <= Zahl <= 65535 ist die zugehörige hexadezimale Zahl programmtechnisch
(also nicht durch die bloße Anwendung entsprechender Formatanweisungen in der "printf"-Funktion) zu ermitteln und auszugeben.
Beispiel: 65534 (dezimal) FFFE (hex)
Beachten Sie bei der Realisierung folgende Eckpunkte:
1. Erzeugen Sie ein übersichtliches Ausgabeformat.
2. Verwenden Sie das Verfahren der Rekursion
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>

int eingabe() {
	int eingegeb;
	do {
		printf("Bitte Zahl eingeben!\n");
		scanf("%d", &eingegeb);
	} while ((eingegeb < 0) || (eingegeb > 65535));
	return eingegeb;
}

int umrechnen(int umrech, int i, int *ergebnis) {
	int rest = (umrech % 16);
	umrech = umrech / 16;

	*(ergebnis + i) = rest;
	i++;

	if (umrech != 0) umrechnen(umrech, i, ergebnis);
	else return i;
}

int main(void) {
	int erg[4];
	int eingegeben = eingabe();
	int anz = umrechnen(eingegeben, 0, erg);

	printf("\nDie Zahl %d in Hex ist:\n", eingegeben);

	for (anz--; anz >= 0; anz--) {
		printf("%X", *(erg + anz));   //Switch-Case...
	}
	
	printf("\n\n");
	system("PAUSE");
}
