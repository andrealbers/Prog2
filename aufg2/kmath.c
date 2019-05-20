#include "kstruct.h"

struct komplex add(struct komplex summand1, struct komplex summand2)
{
	struct komplex z;
	z.real = summand1.real + summand2.real;
	z.imag = summand1.imag + summand2.imag;
	return z;
}

void sub(struct komplex minuend, struct komplex subtrahend, struct komplex *erg)
{
	erg->real = minuend.real - subtrahend.real;
	erg->imag = minuend.imag - subtrahend.imag;
	
}

struct komplex mul(struct komplex multiplikant, struct komplex multiplikator)
{
	struct komplex z;
	z.real = (multiplikant.real * multiplikator.real) - (multiplikant.imag * multiplikator.imag);
	z.imag = (multiplikant.real * multiplikator.imag) - (multiplikant.imag * multiplikator.real);
	return z;
}

struct komplex divi(struct komplex dividend, struct komplex divisor)
{
	struct komplex z;
	z.real = (dividend.real*divisor.real + dividend.imag*divisor.imag) / (divisor.real*divisor.real + divisor.imag*divisor.imag);
	z.imag = (dividend.imag*divisor.real - divisor.imag*dividend.real) / (divisor.real*divisor.real + divisor.imag*divisor.imag);
	return z;
}