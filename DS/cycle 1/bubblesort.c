#include <stdio.h>
int main()
{
 int a[100],i,n,j,temp;
 printf("Enter the limits:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   }
 for (i=1;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[j]>a[j+1])  
    {
    temp=a[j+1];
    a[j+1]=a[j];
    a[j]=temp;
    break;
    }
      
  }
  
 }
 printf("Sorted Order:");
for (i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
 }
  
