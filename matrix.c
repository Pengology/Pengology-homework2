#include "matrix.h"

int* row_max(int** array){
	int i,j;
	int* comp = malloc(sizeof(int) * ROWS);
	for(i = 0; i < ROWS; i++){
            comp = array[i][0];
		for(j=0; j< COLS; j++)
        {
            if(comp < array[i][j])
            {
                comp = array[i][j];
            }
        }
	}
	return comp;
}


int* sum_cols(int** array){
    
        int i,j;
        int* sum = malloc(sizeof(int) * COLS);
              //sum of each individual column
        for (j= 0; j < COL; j++)
        {
            sum = 0;
            for (i = 0; i < ROWS; i++)
                sum = sum + array[i][j];
        }
        return sum;
}