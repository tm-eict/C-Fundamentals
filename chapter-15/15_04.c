#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	char streetAndNr[BUFSIZ];
	int postalCode;
	char town[BUFSIZ];
	char phoneNumber[15];
} Address;

typedef struct
{
	char name[BUFSIZ];
	Address homeAddress;
	Address schoolAddress;
};


void readAddress(Address*);
void printAddress(Address);


int main(void)
{
	Address a;
	readAddress(&a);
	printAddress(a);

	// # Exit
	return 0;
}

void readAddress(Address* p)
{
	printf("(char[BUFSIZ])streetAndNr(without spaces), (int)postalCode, (char[BUFSIZ])town, (char[15])phoneNr:\n");
	scanf("%s%*c%d%*c%s%*c%15s%*c", p->streetAndNr, &p->postalCode, p->town, p->phoneNumber);
}

void printAddress(Address p)
{
	printf("streetAndNr: %s\n"
		"postalCode: %d\n"
		"town: %s\n"
		"phoneNumber: %s\n", p.streetAndNr, p.postalCode, p.town, p.phoneNumber);
}
