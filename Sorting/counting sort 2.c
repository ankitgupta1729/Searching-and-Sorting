#include<stdio.h>
int main()
{
  int a[10000],b[10000],c[10000], i, j,n,n1,n2 ;
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
        c[i]=0;
  for(i=0;i<n;i++)
    {
         c[a[i]]++ ;
    }   
  for(i=n1+1;i<=n2;i++)
        c[i]=c[i-1]+c[i];
   
   printf("Sorted Sequence is :\n"); 
  for(i=n-1;i>=0;i--)
        {
          b[c[a[i]]-1] = a[i];
          c[a[i]] = c[a[i]]-1; 
        }  
  for(i=0;i<n;i++)
  { 
      printf("%d\n",b[i]);
  }
   return 0;
}
