#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define NUM1 "numbers1.txt"
#define NUM2 "numbers2.txt"

int main(void)
{
	FILE* fp1, * fp2;
	int num1, num2, end1, end2;

	//Open files
	if ((fp1 = fopen(NUM1, "r")) == NULL)
	{
		printf("Can't open %s.", NUM1);
		exit(-1);
	}
	if ((fp2 = fopen(NUM2, "r")) == NULL)
	{
		printf("Can't open %s.", NUM2);
		exit(-2);
	}

	//List numbers
	printf("%s: ", NUM1);
	while (fscanf(fp1, "%d%*c", &num1) != EOF)
	{
		printf("%d ", num1);
	}
	printf("\n%s: ", NUM2);
	while (fscanf(fp2, "%d%*c", &num2) != EOF)
	{
		printf("%d ", num2);
	}
	puts("");

	//Reset counter
	fseek(fp1, 0, SEEK_SET);
	fseek(fp2, 0, SEEK_SET);

	//merge
	end1 = fscanf(fp1, "%d%*c", &num1);
	end2 = fscanf(fp2, "%d%*c", &num2);

	while (end1 !=EOF && end2 != EOF)
	{
		if (num1 > num2)
		{
			printf("%d ", num2);
			end2 = fscanf(fp2, "%d%*c", &num2);
		}
		else
		{
			printf("%d ", num1);
			end1 = fscanf(fp1, "%d%*c", &num1);
		}		
	}

	while (end1 != EOF)
	{
		printf("%d ", num1);
		end1 = fscanf(fp1, "%d%*c", &num1);
	}

	while (end2 != EOF)
	{
		printf("%d ", num2);
		end2 = fscanf(fp2, "%d%*c", &num2);
	}
	//Anon did this without the 2 extra while loops, if/ifel in 1 while. Both work, mine might be slower/faster /shrug
	

	//close files
	_fcloseall();
	//fclose(fp1);
	//fclose(fp2);

	return 0;
}