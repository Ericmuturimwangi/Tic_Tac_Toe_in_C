#include<stdio.h>
#include <string.h>
int main (){
	
	char ch;
	char pass [20];
	char saved_pass [20];
	int i = 0;

start:
	printf("ENter password: ");

	while (1) {
		ch = getch();

	if(ch==13)
	{
	pass[i]='\0';
	break;
	}
	else
	{
	pass[i++]=ch;
	printf("*");
	}
}
printf("You entered : %s\n ", pass);

FILE * ptr ;
ptr=fopen("password.txt","r");
if (ptr == NULL){
	printf("Error opening file.n");
	return 1;
}
fscanf(ptr, "%s", saved_pass);

fclose (ptr);

printf("Saved password %s\n ", saved_pass);
int l=strcmp(pass,saved_pass);
if (l==0)
{
	printf("LOGIN SUCCESSFUL\n");
}
else
{
	printf("INCORRECT PASSWORD\n");
	goto start;
}



return 0;
}	
