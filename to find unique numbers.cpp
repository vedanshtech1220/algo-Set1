#include<stdio.h>
int main()
{
	int n ;
	
	printf("Enter the size of array:");
	scanf("%d",&n);

	int a[n];
	
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("The unique numbers in the array are:");
	for(int i=0;i<n;i++)
	{
		int f=0;
		for(int j=0;j<n;j++)
		{
			if(i!=j && a[i]==a[j])
			{
				f=1;
				break;
			}
		}
		
			if(!f)
			{
				printf("%d ",a[i]);
			}
			
	}	
}
