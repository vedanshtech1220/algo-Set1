//1 based indexing
#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int a[n],f=0;
	
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int number,index=0;
	printf("Enter the number you want to search:");
	scanf("%d",&number);
	for(int i=0;i<n;i++)
	{
		if(a[i]==number)
		{
		 	index=i;
			 f=1;	
		}
	}
	if(f)
	{
		printf("The element is found at index no.:%d",index);
	}
	else
	{
		printf("The element is not found");
	}
}
