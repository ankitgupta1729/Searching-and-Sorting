#include<stdio.h>
int linear_search_using_array_with_recursion(int *arr , int n,int target);
int main()
{
	int a[10000],n,target,i,j;
	printf("How many numbers which you want to enter:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	printf("Enter the element which you want to search:");
	scanf("%d",&target);
	
	j = linear_search_using_array_with_recursion(a,n,target);
	
	if(j==-1)
		printf("This Element is not present in the list\n");
	else printf("Element %d is present at position %d in the list\n",target,(j+1));
	
return 0;
}
int linear_search_using_array_with_recursion(int *arr ,int n , int target)
{
    if(n==0)
    	return -1;
    if(arr[n-1]==target)
        return n-1;
        
    return  linear_search_using_array_with_recursion(arr , --n ,target);
 }
     
