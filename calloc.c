#include<stdlib.h>
#include <stdio.h>

int main (){
	itn numElements = 5;
	int* dynamicArray=calloc(numElements, sizeof(int));

	if(dynamicArray == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}
	// accessing and manipulating the dynamically allocated array.

	free(dynamicArray);

	return 0;
}
