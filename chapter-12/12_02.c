#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum Months_t { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec } Month;

char* getMonthStr(Month);
char maxDay(Month);
Month nextMonth(Month);
Month nextDay(Month*, char*);
void printDay(Month, char);
void read(Month*, char*);

int main(void)
{
	//  Variables
	Month month;
	char day;

	// # Input
	read(&month, &day);
	printDay(month, day);

	// Logic
	nextDay(&month, &day);
	printDay(month, day);


	// # Exit
	return 0;
}

char* getMonthStr(Month month)
{
	switch (month)
	{
	case Jan:
		return "January";
		break;
	case Feb:
		return "February";
		break;
	case Mar:
		return "March";
		break;
	case Apr:
		return "April";
		break;
	case May:
		return "May";
		break;
	case Jun:
		return "June";
		break;
	case Jul:
		return "July";
		break;
	case Aug:
		return "August";
		break;
	case Sep:
		return "September";
		break;
	case Oct:
		return "October";
		break;
	case Nov:
		return "November";
		break;
	case Dec:
		return "December";
		break;
	}
}


char maxDay(Month month)
{
	if (month == Feb)
		return 28;
	else if (month > Jul)
		month++;

	return month % 2 ? 31 : 30;
}

Month nextDay(Month* month, char* day)
{
	if (++*day > maxDay(*month))
		*month = nextMonth(*month), *day = 1;
}

void printDay(Month month, char day)
{
	printf("The current day is: %s %hhu\n", getMonthStr(month), day);
}

Month nextMonth(Month month)
{
	return (Month)(month == Dec ? Jan : month + 1);
}

void read(Month* month, char* day)
{
	char a;
	printf("Enter the current day and month (as integers): ");
	scanf("%hhu%*c%hhu%*c", day, &a);

	*month = (Month)(a);
}