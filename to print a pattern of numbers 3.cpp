#include<stdio.h>
void pattern(int rows)
{
	for(int i=1;i<=rows;i++)
	{
		for(int j=i;j<=rows;j++)
		{
			printf("%d",j);
		}
		for(int k=1;k<i;k++)
		{
			printf("%d",rows);
		}
		printf("\n");
	}
}
int main()
{
	int rows;
	printf("Enter the no. of rows:");
	scanf("%d",&rows);

	pattern(rows);
}
