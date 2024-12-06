#include<stdio.h>
int main()
{
	int a[5];
	printf("Enter 5 integers in the array:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int max;
	for(int i=0;i<5;i++)
	{
		max=a[i];
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Max of all the numbers:%d",max);
}
