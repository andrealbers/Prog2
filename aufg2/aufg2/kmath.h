#ifndef __KMATH__
#define __KMATH__

struct komplex add(struct komplex summand1, struct komplex summand2);
void sub(struct komplex minuend, struct komplex subtrahend, struct komplex *differenzwert);
struct komplex mul(struct komplex multiplikant, struct komplex multiplikator);
struct komplex divi(struct komplex dividend, struct komplex divisor);

#endif // !__KMATH__
