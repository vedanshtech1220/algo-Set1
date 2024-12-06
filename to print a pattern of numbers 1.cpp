#include<stdio.h>
void pattern(int rows, int columns)
{
	for(int i=1;i<=rows;i++)
	{
		if(i%2!=0)
		for(int j=1;j<=columns;j++)
		{
			printf("%d",j);
		}
		if(i%2==0)
		for(int j=columns;j>=1;j--)
		{
			printf("%d",j);
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
