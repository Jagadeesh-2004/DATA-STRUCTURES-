#include <stdio.h>

#define MAX_SIZE 10

// Function to get input for a square matrix from the user
void getMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    printf("Enter the elements of the %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to calculate the sum of diagonals of a square matrix
int sumOfDiagonals(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
	{
        sum += matrix[i][i]; 
        sum += matrix[i][size - 1 - i]; 
    }
    if (size % 2 == 1)
        sum -= matrix[size / 2][size / 2];
    return sum;
}
int main()
{
	printf("GK JAGADEESH - 192324006\n");
    int size;
    printf("Enter the size of the square matrix (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    if (size <= 0 || size > MAX_SIZE)
	{
        printf("Invalid matrix size!\n");
        return 1;
    }
    int matrix[MAX_SIZE][MAX_SIZE];
    getMatrix(matrix, size);
    int sum = sumOfDiagonals(matrix, size);
    printf("Sum of diagonals: %d\n", sum);
    return 0;
}
