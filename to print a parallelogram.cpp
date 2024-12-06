#include<stdio.h>
void parallelogram(int rows, int columns)
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<rows-i-1;j++)
		{
			printf(" ");
		}
		for(int j=0;j<columns;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int rows, columns;
	printf("Enter the no. of rows:");
	scanf("%d",&rows);
	printf("Enter the no. of columns:"); 
	scanf("%d",&columns);
	parallelogram(rows,columns);
}
