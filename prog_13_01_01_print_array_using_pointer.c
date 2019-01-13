#include<stdio.h>
#include<conio.h>
void print(int array[5])
{
	int *ptr;
	ptr = array;
	int i;
	for(i = 0; i < 5; i++)
	printf(" %d ",*(ptr + i));
	printf("\n");
}
void reverse(int array[5])
{
	int *ptr;
	ptr = array;
	int i;
	for(i = 4; i >= 0; i--)
	printf(" %d ",*(ptr + i));
}

void main(int arg1, char arg2[])
{
	int i, element, array[5];
	printf("Enter 5 values:");
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&element);
		array[i] = element;
	}
	print(array);
	reverse(array);
	
}

