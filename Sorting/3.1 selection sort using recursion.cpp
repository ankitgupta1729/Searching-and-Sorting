#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
 int selection_sort(int *arr , int m);
 int main()
 {
     while(1)
     {
 	int a[10000],i,n;
 	printf("Enter the number of elements which you want to put in array:");
 	scanf("%d", &n);
 	printf("Enter Elements\n");
 	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	selection_sort(a,n);
	for(i=0;i<n;i++)
		{
			printf("a[%d] = %d\n",i,a[i]);
		} 
	printf("\n");	
}
	return 0;	
 }
 
int selection_sort(int *arr,int m)
    {
    	int i,max,j;
    	max = arr[0];
    	if(m ==0)
    	    return arr[0];
    	for(i=0;i<m;i++)
    	  {
    	  	if(arr[i]>=max)
    	  	{
    	  		j=i;
    	  	    max=arr[i];
    	     }
    	  
          } 
          arr[j]=arr[m-1];
		  arr[m-1]=max; 
          selection_sort(arr,m-1);
		   
    }
