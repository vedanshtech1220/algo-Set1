#include<stdio.h>
void Half_Diamond(int columns)
{
	for(int i=0;i<columns;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=columns-2;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int columns;

	printf("Enter the no. of columns:"); 
	scanf("%d",&columns);
	Half_Diamond(columns);
}
