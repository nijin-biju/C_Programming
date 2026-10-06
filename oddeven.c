#include <stdio.h>
int main()
{
 int a[100],i,n;
 printf("Enter the limits:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("The elements are:");
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }
 
 printf("Even numbers are: ");
 for(i=0;i<n;i++)
 {
 if(a[i]%2==0)
  {
   printf("%d ",a[i]);
  }
 }
  printf("Odd numbers are: ");
 for(i=0;i<n;i++)
 {
 if(a[i]%2!=0)
  {
   printf("%d ",a[i]);
  }
 }
}
