#include "headers.h"



// the function is used to initialize the matrix by using a random value from 0 t0 100

void InitMatrix(int layer, int row, int column, int a[layer][row][column]){
	int x, m = 100;
 	time_t t;
	int i, j, k;
	srand((unsigned)time(&t));
 	
 	// this loop will step into each element of the array and assign a value for it
 	for(i = 0; i < layer; i++){
 		for(j = 0; j < row; j++){
 			for(k = 0; k < column; k++){
 				// generate a random value
				x = (rand() % m)+1; 
				// assign the value
				a[i][j][k] = x;
			}
		 }
	 }
}
