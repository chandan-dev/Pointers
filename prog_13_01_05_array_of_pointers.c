#include<stdio.h>
#include<conio.h>
 void function(int array[5])
{
	int i, *ptr[5];
	
	for(i = 0; i < 5; i++)
	{
		ptr[i] = &array[i];
		printf("%d  %d %d \n ", ptr[i], &array[i], *ptr[i]);
	}
}

void main()
{
	int array[5] = {12, 23, 89, 34, 26};
	function(array);
}

