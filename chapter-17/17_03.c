#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct client
{
	char number[BUFSIZ]; // Why is this called number?
	char name[BUFSIZ];
	char address[BUFSIZ];
};

typedef struct client Client;

void print(Client*, int);
void read(Client*, int);


int main(int argc, char* argv[])
{
	int  count;
	Client* clients;

	if (argc < 2)
		fprintf(stderr, "Not enough arguments.\n"), exit(-1);
	count = atoi(argv[1]);
	

	if (count == 0)
		fprintf(stderr, "Wrong amount of clients.\n"), exit(-2);

	clients = (Client*)malloc(count * sizeof(Client));

	if (clients == NULL)
		fprintf(stderr, "Could not allocate the memory.\n"), exit(-3);

	read(clients, count);
	print(clients, count);
	free(clients);


	// # Exit
	return 0;
}

void print(Client* clients, int count)
{
	fprintf(stdout, "All customer data:\n");
	for (int i = 0; i < count; i++)
		fprintf(stdout, "%s\t%s\t\t%s\n", clients[i].number, clients[i].name, clients[i].address);
}

void read(Client* clients, int count)
{
	char* tmp = NULL;

	fprintf(stdout, "Enter a list of %d customer numbers and corresponding names:", count);
	for (int i = 0; i < count; i++)
		fscanf(stdin, "%s%*c", clients[i].number),

		fgets(clients[i].name, sizeof clients[i].name, stdin),
		clients[i].name[strlen(clients[i].name) - 1] = '\0';  // Remove '\n' from name

	tmp = (char*)malloc(sizeof(clients->address));
	if (tmp == NULL)
		fprintf(stderr, "Could not allocate the memory.\n"), exit(-4);

	fprintf(stdout, "\nEnter a list of %d customer numbers and corresponding\n"
		"addresses (the customer numbers must be identical to\n"
		"the ones above but can be entered in an arbitrary order.)\n", count);
	for (int i = 0; i < count; i++)
	{
		fscanf(stdin, "%s%*c", tmp);
		for (int i = 0; i < count; i++)
		{
			if (strcmp(tmp, clients[i].number) == 0)
			{
				fgets(clients[i].address, sizeof clients[i].address, stdin);
				clients[i].address[strlen(clients[i].address) - 1] = '\0';
				break;
			}
		}
	}

	free(tmp);
}
