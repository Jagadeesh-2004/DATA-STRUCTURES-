#include<stdio.h>
void fibonacci(int n)
{
    int first = 0, second = 1, next;    
    printf("Fibonacci Series up to %d numbers:\n", n);
    printf("%d %d ", first, second); 
    for (int i = 2; i < n; i++)
	{
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}
int fibonacciSum(int n)
{
    int first = 0, second = 1, next, sum = 1;    
    for (int i = 2; i < n; i++)
	{
        next = first + second;
        sum += next;
        first = second;
        second = next;
    }
    return sum;
}
int main()
{
	printf("GK JAGADEESH - 192324006\n");
    int n;    
    printf("Enter the value of n for Fibonacci series: ");
    scanf("%d", &n);
    
    fibonacci(n); // Print Fibonacci series up to n numbers
    
    int sum = fibonacciSum(n); // Calculate sum of Fibonacci series
    printf("Sum of Fibonacci series up to %d numbers: %d\n", n, sum);
    
    return 0;
}

