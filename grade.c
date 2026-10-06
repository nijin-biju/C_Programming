#include <stdio.h>
int main()
{
 int mark;
 printf("Enter the mark:");
 scanf("%d",&mark);
 if (mark>90)
  {
   printf("Grade A");
  }
  else if(mark>=75 && mark<90)
   {
    printf("Grade B");
    }
  else if(mark>=60 && mark<75)
  { 
   printf("Grade C");
   }
  else if(mark>=45 && mark<60)
   {
    printf("Grade D");
    }
   else
   {
   printf("Failed");
   }
  }
