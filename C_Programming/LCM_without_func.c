#include<stdio.h>
int main()
{
	int num1,num2,max,lcm;
	printf("Enter the Elements:");
	scanf("%d%d",&num1,&num2);

	max = (num1 < num2) ? num1 : num2;

	lcm = max;

	while( (lcm % num1 != 0) || (lcm % num2 != 0) )
	{
		lcm = lcm + max;
	}
	printf("LCM %d of %d is %d", num1,num2,lcm);

	return 0;
}
