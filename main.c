#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#define ROWS 5
#define COLS 5

int** load_file(FILE* file) {};

int main()
{
    /*
       TODO
       - Declare and initialize the FILE struct pointing at twenty-five-ints.txt
       - Call function to transform file into 2d array
       - Pass the 2d array to each of the functions declared in sum.h
       - Print the results of each function
     */

    FILE *fptr1;
    int *arr
    int *rowLargest;
    int *sumCol;
    int t;
    fptr1 = fopen("twenty-five-ints.txt","r");
    if(fptr1 == NULL)
    {
        printf("File not found!\n");
    }
    arr = load_file(fptr1);
    rowLargest = row_max(arr);
    sumCol = sum_cols(arr);
    printf("The Largest Elements in each row: \n");
    for ( t = 0; t < ROWS ; i++ )
    {
        printf("*(rowLargest + %d) : %f\n",  t, *(rowLargest + t) );
    }

    printf("\nThe Sum of each Column: \n");
    for ( t = 0; t < COLS ; i++ )
    {
        printf("*(sumCol + %d) : %f\n",  t, *(sumCol + t) );
    }

    free(rowLargest);
    free(sumCol);
    return 0;
}

int** load_file(FILE* file)
{

    int i;
    int* ptr;
    int j = 0;
    int** matrix = (int**) malloc(ROWS*sizeof(*int));
    for(i = 0; i < ROWS; i++)
    {
        matrix[i] = (int*) malloc(COLS*sizeof(int));
    }
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            fscanf(fptr1, "%d ", &ptr);
            matrix[i][j] = num;
        }
    }

    fclose(fptr1);
    return matrix;
}

