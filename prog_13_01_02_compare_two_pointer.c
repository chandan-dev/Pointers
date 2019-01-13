#include<stdio.h>
#include<conio.h>
const int max = 5;
void print(int array[max])
{
	int *ptr;
	ptr = array;
	while(ptr < &array[max])
	printf(" %d ", *ptr++); 
}
void main(int arg1, char arg2[])
{
	int i, element, array[5];
	printf("Enter 5 values:");
	for(i = 0; i < max; i++)
	{
		scanf("%d", &element);
		array[i] = element;
	}
	print(array);	
}

