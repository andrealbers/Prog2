/*Erstellen Sie ein strukturiertes und gut kommentiertes Programm zur byteweisen Ausgabe des Inahltes einer Datei
auf dem Monitor (Dump-Programm). Realisieren Sie dabei folgende Eckpunkte:
1. Das Programm soll von der Betriebssystemebene mit zwei Parametern wie folgt aufgerufen werden:
<name des programms> -optionen <dateiname>
2. mögliche Optionen sind:
-h byteweise Ausgabe im hexadezimalen Format
-o byteweise Ausgabe im oktalen Format
-d byteweise Ausgabe im dezimalen Format
3. Sofern die Anzahl der Paramter, die an das Programm übergeben werden, nicht korrekt ist, geben Sie eine Fhelermeldung aus
und brechen das Programm ab.
4. Geben Sie jeweils 16 Bytes (getrennt durch ein Leerzeichen) pro Zeile aus.*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>

void fehlermeldungen(int fehlerid);

int main(int argc, char **argv)
{
	int anzparameter = argc;
	unsigned char c;
	char befehl = argv[1][1];
	char *pfad = argv[2];

	FILE *fp;

	if (anzparameter != 3)
	{
		fehlermeldungen(-1);
		return -1;
	}

	fp = fopen(pfad, "rb");

	if (fp == NULL)
	{
		fehlermeldungen(-2);
		return -2;
	}

	int count = -1;

	while ((fread(&c, sizeof(char), 1, fp)))
	{
		count++;
		if (count == 16)
		{
			printf("\n");
			count = 0;
		}

		switch (befehl)
		{
		case 'h':
			printf("%3X", c);
			break;

		case 'o':
			printf("%3o ", c);
			break;

		case 'd':
			printf("%3i ", c);
			break;
		}
	}

	printf("\n\n");
	system("PAUSE");
}




void fehlermeldungen(int fehlerid)
{
	switch (fehlerid)
	{
	case -1:
		printf("Fehler: Anzahl Parameter != 3");
		break;
	case -2:
		printf("Fehler: Oeffnen der Datei fehlgeschlagen!");
		break;
	}
}