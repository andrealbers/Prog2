/*
Entwickeln Sie ein strukturiertes und gut kommentieretes Programm f�r nachstehende Aufgabenstellung:
F�r eine von der Tastatur einzugebende vorzeichenlose Dezimalzahl im Wertebereich
0 <= Zahl <= 65535 ist die zugeh�rige hexadezimale Zahl programmtechnisch
(also nicht durch die blo�e Anwendung entsprechender Formatanweisungen in der "printf"-Funktion) zu ermitteln und auszugeben.
Beispiel: 65534 (dezimal) FFFE (hex)
Beachten Sie bei der Realisierung folgende Eckpunkte:
1. Erzeugen Sie ein �bersichtliches Ausgabeformat.
2. Verwenden Sie das Verfahren der Rekursion
*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>

void eingabe(int *eingegeben);
void hexberech(float umrechnen);

int main()
{
	int dezimalzahl;

	eingabe(&dezimalzahl);
	hexberech(dezimalzahl);

	printf("\n\n");
	system("PAUSE");
	return 0;
}

void eingabe(int *eingegeben)
{
	printf("Bitte geben Sie eine Dezimalzahl ein 0<=x<=65535:\n");
	scanf("%d", eingegeben);
}

void hexberech(float umrechnen)
{
	float rest;
	rest = umrechnen / 2;
	printf("%f", rest);

}