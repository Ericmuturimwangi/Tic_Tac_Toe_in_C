#include<stdio.h>
#include<string.h>

#if !defined (MESSAGE)
	#define MESSAGE "YPu wish!"
#endif

int main(void) {
	printf("Here is the messa: %s\n", MESSAGE);
	return 0;
}
/*prints here is the message : YOu wish*/

