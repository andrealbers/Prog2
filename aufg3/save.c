#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#include "kstruct.h"

void save(FILE *fp, struct komplex *k1) {
	fwrite(k1, sizeof(struct komplex), 1, fp);
}

void read(FILE *fp, int welche) {
	struct komplex ausgabe;
	switch (welche) {
	case 1:
		fseek(fp, 0, SEEK_SET);
		fread(&ausgabe, sizeof(struct komplex), 1, fp);
		printf("Realteil:\t%.3lf", ausgabe.real);
		printf("\nImaginaerteil:  %.3lf", ausgabe.imag);
		break;
	case 2:
		fseek(fp, sizeof(struct komplex), SEEK_SET);
		fread(&ausgabe, sizeof(struct komplex), 1, fp);
		printf("Realteil:\t%.3lf", ausgabe.real);
		printf("\nImaginaerteil:  %.3lf", ausgabe.imag);
		break;
	case 3:
		fseek(fp, 2*(sizeof(struct komplex)), SEEK_SET);
		fread(&ausgabe, sizeof(struct komplex), 1, fp);
		printf("Realteil:\t%.3lf", ausgabe.real);
		printf("\nImaginaerteil:  %.3lf", ausgabe.imag);
		break;
	default:
		printf("Falsche Eingabe!");
		break;
	}
}

void edit(FILE *fp, int welche, struct komplex *z) {
	switch (welche) {
	case 1:
		fseek(fp, 0, SEEK_SET);
		fwrite(z, sizeof(struct komplex), 1, fp);
		break;
	case 2:
		fseek(fp, sizeof(struct komplex), SEEK_SET);
		fwrite(z, sizeof(struct komplex), 1, fp);
		break;
	case 3:
		fseek(fp, 2*(sizeof(struct komplex)), SEEK_SET);
		fwrite(z, sizeof(struct komplex), 1,fp);
		break;
	default:
		printf("\nNichts geandert!");
		break;
	}
}