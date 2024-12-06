#include<stdio.h>
void pattern(int rows, int columns)
{
	for(int i=1;i<=rows;i++)
	{
		if(i==1|| i==rows)
		{
		for(int j=1;j<=columns;j++)
		{
			printf("1");
		}
		}
		else
		{
		for(int j=1;j<=columns;j++)
		{
			if(j==1 || j==columns)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
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
	pattern(rows,columns);
}
