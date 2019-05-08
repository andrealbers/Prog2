#include <stdlib.h>
#include <stdio.h>

#include "data.h"
#include "kstruct.h"

void ksave(FILE *fp, struct komplex *z) {

	fwrite(z, sizeof(struct komplex), 1, fp);

}

void kread(FILE *fp, struct komplex z) {


}
