#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int anzp = argc;		 //3 = richtig
	char *op = argv[1];		 //op[1] = Operation
	char *pfad = argv[2];
	unsigned char buffer;
	int k = 0;
	
	if (anzp != 3) {
		printf("Anzahl Parameter falsch!\n");
		return 0;
	}

	FILE *fp;
	if ((fp = fopen(pfad, "r+")) != NULL) {
		printf("Datei geoeffnet!\n\n");
		
		while ((fread(&buffer, sizeof(char), 1, fp)) != NULL) {
			
			if (k == 16) {
				printf("\n");
				k = 0;
			}
			
			switch (op[1]) {
			case 'h':
				printf("%.2X ", buffer);
				break;
			case 'o':
				printf("%.3o ", buffer);
				break;
			case 'd':
				printf("%.3d ", buffer);
				break;
			default: 
				printf("Falsche Eingabe!");
				break;
			}
			k++;
		}
	}
	else printf("Fehler beim Oeffnen der Datei!");

	printf("\n\n");
}