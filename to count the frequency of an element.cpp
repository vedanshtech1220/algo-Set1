#include<stdio.h>
int main()
{
	int n ;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int a[n],f[n],visited[n];
	
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		visited[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		if(visited[i]==0)
		{
		int count=0;
		for(int j=0;j<n;j++)
		{
	
			if(i!=j&& a[i]==a[j])
			{
				count++;
				visited[j]=1;
			}
		}
		f[i]=count+1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(visited[i]==0)
		printf("the frequency of %d is %d\n",a[i],f[i]);
	}
}
