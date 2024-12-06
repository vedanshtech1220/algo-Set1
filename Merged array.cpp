#include<stdio.h>
int main()
{
	int n ,m;
	
	printf("Enter the size of array1:");
	scanf("%d",&n);
	
	printf("Enter the size of array2:");
	scanf("%d",&m);
	
	int a[n],b[m];
	
	printf("Enter the elements of array1:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements of array2:");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	
	int size = n+m,i=0,j=0;
	int c[size];
	
	
		for(int k=0;k<size;k++)
		{
			if(i<n && j<m)
			{
				if(a[i]<b[j])
				{
					c[k]=a[i];
					i++;
			    }
			    else
			    {
			    	c[k]=b[j];
			    	j++;
				}
		    }
		    else if(i>=n)
		    {
		    	while(j!=m)
		    	{
		    		c[k]=b[j];
		    		j++;
		    		k++;
		    		break;
				}
			}
			else if(j>=m)
			{
				while(i!=n)
		    	{
		    		c[k]=a[i];
		    		i++;
		    		k++;
		    		break;
				}
			}
			
		}	
	
	printf("Merged Array:");
	for(int k=0;k<size;k++)
	{
		printf("%d ",c[k]);
	}
}
