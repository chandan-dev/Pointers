#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{
	int var = 10;
	int *p;
	p = &var;
	printf("var= %d\n", var);
	printf("p  = %x\n", p);
	printf("*p = %d\n", *p);
	printf("& var = %x\n", &var);
	getch();
	return 0;
	
}
