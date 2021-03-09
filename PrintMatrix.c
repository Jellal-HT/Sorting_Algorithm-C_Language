
#include "headers.h"


// function used to print out the matrix
void PrintMatrix(int layer, int row, int column, int a[layer][row][column]){
	// get first position address of the array
	int* pos = a[0][0][0]; 
	int i, j, k;
	// a loop used to check whether the matrix is sorted matrix or not
	for(i = 0; i < layer*row*column; i++){
		if(*(pos) > *(pos + 1)){
			break;
		}
		pos = pos + 1;
	}
	// print out different message based on the type of the matrix
	if(i == layer*row*column){
		printf("Sorted Matrix\n");
	} else {
		printf("Original Matrix\n");
	}
	printf("\n");
	for(i = 0; i < layer; i++){
		printf("    Layer %d\n", i +1);
 		for(j = 0; j < row; j++){
 			// print out the row of the array
 			printf("( %d )", j +1);
 			for(k = 0; k < column; k++){
 				// print out the value of the current position
 				printf(" %-6d", a[i][j][k]);
			}
			printf("\n");
		 }
		 printf("\n");
	}
}

// a function used to print out the matrix in a linear manner
void PrintMatrixLinear(int layer, int row, int column, int a[layer][row][column]){
	int i, j, k;
	// step into each element of the array and print it out
	for(i = 0; i < layer; i++){
 		for(j = 0; j < row; j++){
 			for(k = 0; k < column; k++){
 				printf("%d %d %d - x %d\n", i, j, k, a[i][j][k]);
			}
		 }
	}
}
