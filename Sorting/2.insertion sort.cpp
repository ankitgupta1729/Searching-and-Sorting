#include<stdio.h>

int main()
{ 
while(1){
	int a[100000],i,n,key,j;
	
	printf("Enter the number of elements which you want to put it in array:");
	scanf("%d",&n);
	//Reading the array
	printf("Enter the Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
    //logic
    for(i=1;i<n;i++)
    {    
	    key = a[i]; 
	    j=i-1;
	  /* USING WHILE LOOP
	   while((j>=0)&&(a[j]>key)) 
	   { 
	        	a[j+1] = a[j];
	        	j--;
	   }*/
	for(;j>=0;j--)
	   {
	   	if(a[j]>key)
	   	   a[j+1]=a[j];
	   	else break;   
	   }
	   a[j+1]=key;
    }
    //printing array
	for(i=0;i<n;i++)
		printf("\na[%d] = %d",i,a[i]);
		printf("\n");
}
	return 0;
}
