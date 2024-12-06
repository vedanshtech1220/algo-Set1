#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int i=0,j=n-1;
	while(i<j)
	{
		if(a[i]!=a[j])
		{
			
			printf("Array is not a palindrome.");
			return 0;
		}
			i++;
			j--;
		}
	
	printf("Array is a palindrome.");
}
