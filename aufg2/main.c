#include <stdio.h>
#include "kstruct.h"
#include "kio.h"
#include "kmath.h"


int main(void)
{
	struct komplex a, b, erg;

	printf("Erste komplexe Zahl\n");
	eingabe(&a);
	printf("\nZweite komplexe Zahl\n");
	eingabe(&b);

	printf("\n");
	printf("**********************************************************************\n");
	erg = add(a, b);
	ausgabe(&erg, "Addition");

	sub(a, b, &erg);
	ausgabe(&erg, "Subtraktion");

	erg = mul(a, b);
	ausgabe(&erg, "Multiplikation");
	
	if ((b.real && b.imag) == 0) {
		printf("Division abgebrochen! Divisor ist 0!\n\n");
		system("PAUSE");
		return -1;
	}
	
	erg = divi(a, b);
	ausgabe(&erg, "Division");
	
	system("PAUSE");
	return 0;
}

