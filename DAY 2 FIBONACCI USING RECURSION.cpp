#include<stdio.h>
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	printf("GK JAGADEESH - 192324006\n");
    int n;
    printf("Enter the value of n to find the nth Fibonacci number: ");
    scanf("%d", &n);
    if (n < 0)
	{
        printf("Invalid input. n should be non-negative.\n");
        return 1;
    }
    int result = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);
    return 0;
}
