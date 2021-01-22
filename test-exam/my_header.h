#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 32

typedef struct {
	int dag;
	int maand;
	int jaar;
} datum;

typedef struct {
	char naam[LEN];
	datum gebdatum;
	char gemeente[32];
} persoon;

int lees(persoon*, int, datum, int, FILE*);
int kies(void);
void printen(persoon*, datum, int, int);
int bereken(datum, persoon);