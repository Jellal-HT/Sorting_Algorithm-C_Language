// this function will sort the matrix

#include "headers.h"

/* it will receive the first position address of the matrix and the 
total amount of element in the matrix as parameters */
void SortMatrix(int* first, int sum){
	// a variable uses to indicate true or false(1 or 0)
	int bool = 1;
	int i = 0;
	// get the first position of the array
	int* pos = first;
	while(bool){
		pos = first;
		// change the value of bool to false(indicate that no values are in wrong order)
		bool = 0;
		/* starting from the first position, compare it with next position; 
		if the value of current position is bigger, then exdchange value.
		Then, move to next place and starting this process until reach the end of the position*/
		for(i = 0; i < sum - 1; i++){
			if(*pos > *(pos + 1)){
				*pos = *pos + *(pos + 1);
				*(pos + 1) = *pos - *(pos + 1);
				*pos = *pos - *(pos + 1);
				// change value of bool to true
				bool = 1;
			}
			// move the current position to next position
			pos = pos + 1;
		}
	}
}
