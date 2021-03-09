#include "header.h"


// this is the main function of the project


int main(){
	// create three variable to store the layer, row, column of the matrix
	int a, b, c;
	// get the layer, row and column from the users
	printf("\nEnter Values for Layers, Rows, Columns (elements in each row): ");
	scanf("%d %d %d", &a, &b, &c);
	// keep doing the steps below util the user indicates terminal by assigning 0 value
	while(a != 0 && b != 0 && c != 0){
		// create an empty matrix
		int array[a][b][c];
		// initial the matrix
		InitMatrix(a, b, c, array);
		// print out the matrix
		PrintMatrix(a, b, c, array);
		// sort the matrix
		SortMatrix(&(array[0][0][0]), a*b*c);
		// print out the matrix
		PrintMatrix(a, b, c, array);
		// print out the matrix in a linear manner
		PrintMatrixLinear(a, b, c, array);
		
		// get the value from the users again
		printf("\nEnter Values for Layers, Rows, Columns (elements in each row): ");
		scanf("%d %d %d", &a, &b, &c);
	}
	printf("FINISHED\n");
	return 0;
}
