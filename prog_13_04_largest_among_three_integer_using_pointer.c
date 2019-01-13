#include<stdio.h>
#include<conio.h>
int result(int var_1, int var_2, int var_3, int *greater)
{
	if(var_1 > var_2 && var_2 > var_3)
	{
		*greater = var_1;
	}
	else if(var_2 > var_3 && var_3 > var_1)
	
	{
		*greater = var_2;
	}
	else if(var_3 > var_2 && var_2 > var_1)
	{
		*greater = var_3;
	}
	 
}
int  main(int arg1, char *arg2[])
{
	int var_1, var_2, var_3, greater;
	//int *ptr;
	printf("Enter three numbers:");
	scanf("%d %d %d", &var_1, &var_2, &var_3);
	 result(  var_1, var_2,  var_3, &greater);
	printf("%d is largest number", greater);
	getch();
	return 0;
	
}

