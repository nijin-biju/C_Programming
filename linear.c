#include <stdio.h>
int main()
{
 int a[100],i,n,key,found=0;
 printf("Enter the limits:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 
 printf("Enter the elements to be searched:");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
 if(a[i]==key)
  {
   printf("Element found at position:%d \n",i+1);
   found=1;
   break;
  }
 }
 if(found==0){
 printf("Element not found \n");
 }
 return 0;
}
