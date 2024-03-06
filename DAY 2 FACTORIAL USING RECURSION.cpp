#include<stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
	printf("GK JAGADEESH - 192324006\n");
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    factorial(n);
    return 0;
}
