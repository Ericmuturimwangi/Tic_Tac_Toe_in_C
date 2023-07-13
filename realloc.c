#include <stdio.h>
#include <stdlib.h>

int main() {
	int* dynamicArray = malloc(5 * sizeof(int));
	printf("Memry allocation failed.\n");
	return 1;
}

dynamicArray = realloc(dynamicArray, 10 * sizeof(int));

if (dynamicArray == NULL){
	printf("Memory reallocation failed.\n");
	return 1;

}

//Access adn manipulate the resized array

	free(dynamicArray);//free the dynamic allocated memory

	return 0; 
}

