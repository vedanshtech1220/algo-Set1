#include<stdio.h>
void Right_Triangle(int rows)
{
	for(int i=0;i<rows;i++)
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
	int rows;
	printf("Enter the no. of rows:");
	scanf("%d",&rows);

	Right_Triangle(rows);
}
