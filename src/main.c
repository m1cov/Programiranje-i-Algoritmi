#include <stdio.h>
int main()
{

	int x;

	printf("Vnesi broj: ");
	scanf("%d", &x);
	
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			printf("Brojot ne e prost");
			break;
		}
		else if (i == x - 1)
			printf("Brojot e prost");
	}

	scanf("%d", &x);
	return (0);
}