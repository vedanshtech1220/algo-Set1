#include<stdio.h>
#include<stdbool.h>
bool Diamond(int rows)
{
	if(rows%2==0)
	{
		printf("Error.The no. of rows should be odd.");
		return false;
	}
	else
	{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<rows-i-1;j++)
		{
			printf(" ");
		}
		for(int j=0;j<(i*2)+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=rows-2;i>=0;i--)
	{
		for(int j=0;j<rows-i-1;j++)
		{
			printf(" ");
		}
		for(int j=0;j<(i*2)+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return true;
}
}
int main()
{
	int rows, columns;
	printf("Enter the no. of rows:");
	scanf("%d",&rows);
	Diamond(rows);
}
