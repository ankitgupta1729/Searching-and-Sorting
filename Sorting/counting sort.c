#include<stdio.h>
int main()
{
  int a[10000] ,b[10000], i, j,n,n1,n2 ;
  printf("Enter the lower bound of the range :");
  scanf("%d",&n1);
  printf("Enter the upper bound of the range :");
  scanf("%d",&n2);
  printf("Enter the number of elements :");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
  for(i=n1;i<=n2;i++)
        b[i]=0;
  for(i=0;i<n;i++)
    {
         b[a[i]]++ ;
    }   
   printf("Sorted Sequence is :\n"); 
  for(i=n1;i<n2;i++)
        {
          if(b[i]>0)
            {
               for(j=0;j<b[i];j++)
                  printf("%d\n",i);
            }    
        }  
   return 0;
}
