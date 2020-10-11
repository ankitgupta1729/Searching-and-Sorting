#include<stdio.h>
int linear_search_using_array(int *arr , int n,int target);
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
	
	j = linear_search_using_array(a,n,target);
	
	if(j==-1)
		printf("This Element is not present in the list\n");
	else printf("Element %d is present at position %d in the list\n",target,(j+1));
	
return 0;
}
int linear_search_using_array(int *arr ,int n , int target)
{
    for(int i=0;i<n;i++)
    {
    	if(arr[i] == target)
    		return i;
    }
    return -1;

}