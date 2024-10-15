#include<stdio.h>
int main()
{
	int year;
	printf("Enter the Year:");
	scanf("%d", &year);

	if(year % 400 == 0)
	{
		printf("%d Its  Leap Year!",year);
	}

	else if(year % 100 == 0)
	{
		printf("%d Its not Leap Year!",year);
	}

	else if(year % 4 == 0)
	{
		printf("%d Its Leap Year!",year);
	}

	else
	{
		printf("%d Its not Leap Year!",year);
	}
	return 0;
}


	
