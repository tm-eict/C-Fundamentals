#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum Months_t
{
	Jan = 1, Feb, Mar, Apr, May, Jun,
	Jul, Aug, Sep, Oct, Nov, Dec
} Month;

char* getMonthStr(Month);
Month lastMonth(Month);
void printMonth(Month);


int main(void)
{
	
	// # Logic & Ouput
	puts(" Current Month     | Previous Month\n"
		" ------------------------------");
	for (Month month = Jan; month <= Dec; month++)
		printf(" %-18s| %s\n", getMonthStr(month), getMonthStr(lastMonth(month)));

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

Month lastMonth(Month month)
{
	return (Month)(month == Jan ? Dec : month - 1);
}

void printMonth(Month month)
{
	printf("%s", getMonthStr(month));
}