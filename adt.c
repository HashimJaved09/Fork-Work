#include <stdio.h>

int i = 1;

void main()
{
	int sum1, sum2 ,sum3, sum4, pf, cf, j, k;
	sum1 = sum2 = sum3 = sum4 = j = 0;
	pf = fork();
	cf = fork();
	if (j == 0)
	{
		//sleep(20);
		int x; j = 1;
		for(x = 1; x <= 25; x++)
		{
			sum1 += i;
			i++;
		}
		//printf("SUm : 1\n");
	}
	if (j != 0)
	{
		//sleep(15);
		int x;
		for(x = 26; x <= 50; x++)
		{
			sum2 += i;
			i++;
		}
		//printf("SUm : 2\n");
	}
	if (k == 0)
	{
		//sleep(10);
		int x; k = 1;
		for(x = 51; x <= 75; x++)
		{
			sum3 += i;
			i++;
		}
		//printf("SUm : 3\n");
	}
	if (k != 0)
	{
		//sleep(5);
		int x;
		for(x = 76; x <= 100; x++)
		{
			sum4 += i;
			i++;
		}
		//printf("SUm : 4\n");
	}
	if (pf != 0 && cf != 0)
	{
		printf("\nSum of 100 numbers : %d\n\n", sum1 + sum2 + sum3 + sum4);
	}
}
