#include<stdio.h>
int main()
{
	while(1)
	{
		int a[100000],i,j,n;
		printf("Enter the number of elements which you want to put in array :");
		scanf("%d",&n);
		printf("Enter Elements \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		//logic
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]<=a[i])
				   {
				   	a[i]=a[i] + a[j];
				   	a[j]=a[i] - a[j];
				   	a[i]=a[i] - a[j];
				   }
			}
		}
		for(i=0;i<n;i++)
		{
			printf("a[%d] = %d\n",i,a[i]);
		}
		printf("\n");
	}
	return 0;
}
