#include <stdlib.h>
#include <stdio.h>

int main() {
	int result = 42;

	if (result != 0){
		printf("ERrro: Result is not zero, Exiting program.\n");
		exit (1); 
	}

	printf("Program executed successfully\n");

	return 0;
}
