#include<stdio.h>
int main()
{
	printf("GK JAGADEESH - 192324006\n");
	int n, i, fact=1;
	printf("Enter the integer : ");
	scanf("%d", &n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("THE FACTORIAL OF %d IS %d",n, fact);
	}
	else
	{
		printf("ERROR !");
	}
	return 0;
}
