#include <stdio.h>
int main()
{
 int a[100],i,n,sum=0;
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
 for(i=0;i<n;i++)
 {
 sum+=a[i];
 }
 printf("sum is:%d",sum);
 return 0;
}
