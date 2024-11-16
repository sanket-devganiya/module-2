//      WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array
 
 
 #include <stdio.h>

#define MAX 10  


void inputMatrix(int matrix[MAX][MAX], int rows, int cols) 

{
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
}


void printMatrix(int matrix[MAX][MAX], int rows, int cols) 

{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}


void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rows, int cols)

 {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] + B[i][j];
}


void subtractMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rows, int cols)

 {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] - B[i][j];
}


void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rowA, int colA, int colB) 

{
    for (int i = 0; i < rowA; i++)
        for (int j = 0; j < colB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colA; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

int main() 

{
    int rowA, colA, rowB, colB;
    
    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &rowA, &colA);
    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &rowB, &colB);
    
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    
    if (rowA != rowB || colA != colB) {
        printf("Matrix dimensions must match for addition and subtraction.\n");
        return 1;
    }


    printf("Matrix A:\n");
    inputMatrix(A, rowA, colA);
    printf("Matrix B:\n");
    inputMatrix(B, rowB, colB);


    addMatrices(A, B, C, rowA, colA);
    printf("A + B:\n");
    printMatrix(C, rowA, colA);

    
    subtractMatrices(A, B, C, rowA, colA);
    printf("A - B:\n");
    printMatrix(C, rowA, colA);

    
    if (colA != rowB) 
    
    {
        printf("Matrix dimensions must match for multiplication.\n");
        return 1;
    }

    multiplyMatrices(A, B, C, rowA, colA, colB);
    printf("A * B:\n");
    printMatrix(C, rowA, colB);

    return 0;
}
