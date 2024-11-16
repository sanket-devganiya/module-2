//Perform 2D matrix array 

 #include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int matrix[ROWS][COLS], sum = 0;


    printf("Enter matrix elements:\n");


    for (int i = 0; i < ROWS; i++)


        for (int j = 0; j < COLS; j++)


            scanf("%d", &matrix[i][j]);




    printf("Matrix:\n");

    for (int i = 0; i < ROWS; i++)
    
     {
        for (int j = 0; j < COLS; j++) 
        
        {
            printf("%d ", matrix[i][j]);


            sum += matrix[i][j];

        }
        printf("\n");
    }


    printf("Sum of elements: %d\n", sum);
    

    return 0;
}
