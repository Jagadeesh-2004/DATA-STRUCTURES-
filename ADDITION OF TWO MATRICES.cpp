#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
void readMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++)
	{
        for(int j = 0; j < cols; j++)
		{
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    printf("The matrix is:\n");
    for(int i = 0; i < rows; i++)
	{
        for(int j = 0; j < cols; j++)
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void addMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
	{
        for(int j = 0; j < cols; j++)
		{
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
int main()
{
	printf("GK JAGADEESH - 192324006\n");
    int rows, cols;    
    printf("Enter the number of rows and columns for the matrices (max 10 each): ");
    scanf("%d %d", &rows, &cols);
    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];
    if(rows > MAX_ROWS || cols > MAX_COLS)
	{
        printf("Maximum number of rows and columns exceeded!\n");
        return 1;
    }
    printf("For Matrix 1:\n");
    readMatrix(matrix1, rows, cols);
    printf("For Matrix 2:\n");
    readMatrix(matrix2, rows, cols);
    addMatrices(matrix1, matrix2, result, rows, cols);
    printf("Result of addition:\n");
    displayMatrix(result, rows, cols);
    return 0;
}
