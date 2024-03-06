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
void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int rows2, int cols2)
{
    if(cols1 != rows2)
	{
        printf("Matrix multiplication not possible.\n");
        return;
    }
    for(int i = 0; i < rows1; i++)
	{
        for(int j = 0; j < cols2; j++)
		{
            result[i][j] = 0;
            for(int k = 0; k < cols1; k++)
			{
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
int main()
{
	printf("GK JAGADEESH - 19232406\n");
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns for matrix 1 (max 10 each): ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns for matrix 2 (max 10 each): ");
    scanf("%d %d", &rows2, &cols2);
    if(cols1 != rows2)
	{
        printf("Matrix multiplication not possible. Number of columns in Matrix 1 should be equal to the number of rows in Matrix 2.\n");
        return 1;
    }
    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];
    if(rows1 > MAX_ROWS || cols1 > MAX_COLS || rows2 > MAX_ROWS || cols2 > MAX_COLS)
	{
        printf("Maximum number of rows and columns exceeded!\n");
        return 1;
    }
    printf("For Matrix 1:\n");
    readMatrix(matrix1, rows1, cols1);
    printf("For Matrix 2:\n");
    readMatrix(matrix2, rows2, cols2);
    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);
    printf("Result of multiplication:\n");
    displayMatrix(result, rows1, cols2);
    return 0;
}
