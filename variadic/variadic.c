#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum (int count, ...){
	va_list args;
	va_start(args, count);

	int s = 0;
	int i;
	for (i=0; i < count; i ++){
		int x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	return s;
}

int main(int argc, char *argv[]){
	printf("um is : %d\n", sum(3, 1,2,3));
	return 0;
}

