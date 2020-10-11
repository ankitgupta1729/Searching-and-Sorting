#include<stdio.h>
#include<stdbool.h>
int main()
{
	int a[10000],i,j,n,p;
	
	bool flag ; // to know whether array is already sorted or not , if it is already sorted then no need of extra iterations 
	//if for eg. 10,20,30,40,60,50..then after one iteration we don't need extra iterations. so we do flag =0 after each pass of 'i' loop  
	
	printf("\nEnter the number of elements which you want to put in array:");
	scanf("%d",&n);
	printf("Enter Elements\n");
	//reading array
	for (i=0;i<n;i++)
		scanf("\n%d",&a[i]);
	
	//printing array
    /*for (i=0;i<n;i++)
		printf("\na[%d] = %d",i,a[i]);
		
	*/
	//logic
	p=n;
	for(i=0;i<n;i++)
	   {
	   	flag =0;
	    for(j=1;j<p;j++)
	    {
		   if(a[j]<=a[j-1])
		   {
		   	flag =1;
		       a[j]  =a[j]+a[j-1];
			   a[j-1]=a[j]-a[j-1];
			   a[j]  =a[j]-a[j-1];
		   }
	    }
	    if(flag ==0)
	     break ;
	    p=n-1;
	    
       }

       //printing modified array
       printf("sorted sequence is:");
       for (i=0;i<n;i++)
		printf("\na[%d] = %d",i,a[i]);
	return 0;
}
