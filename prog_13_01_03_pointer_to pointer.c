#include<stdio.h>
#include<conio.h>
void function(int);
void main(int ag1, char *arg2[])
{
	int var_1 ;
	printf("Enter an integer:");
	scanf("%d", &var_1);
	function(var_1);
	getch();
}
void function(int var_2)
{
	int *ptr_1;
	int **ptr_2;
	ptr_1 = &var_2;
	ptr_2 = &ptr_1;
	printf("Var = %d  \n", var_2);
	printf("ptr_1 = %d  \n", *ptr_1);
	printf("ptr_2 = %d  \n", **ptr_2);
	getch();
		
}
