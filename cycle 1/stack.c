#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int item)
{
 if(top==MAX-1)
 { 
 printf("\n Stack Overflow");
 return;5
 }
 stack[++top]=item;
 printf("\n %d Pushed to stack",item);
 }
 void pop()
 {
 if (top==-1)
 {
  printf("\n Stack Underflow");
  return;
  }
  printf("\n %d Popped from stack",stack[top--]);
  }
  void peek()
  {
   if(top==-1)
   {
    printf("\n stack is Empty");
    return;
    }
    printf("\n Top element is %d ",stack[top]);
    }
  void display()
  {
   if(top==-1)
   {
    printf("\n Stack is Empty");
    return;
    
    }
    printf("\n stack elements are: \n");
    for(int i=top;i>=0;i--)
    { 
    printf("%d ",stack[i]);
    }
   }
  int main() 
  {
   int choice,value;
   while(1)
   {
    printf("\n \n Stack Operations Menu:");
    printf("\n 1.Push");
    printf("\n 2.Pop");
    printf("\n 3.Peek");
    printf("\n 4.Display");
    printf("\n 5.Exit");
    printf("\n Enter your choice:");
    scanf("%d ",&choice);
    switch(choice)
    {
     case 1:
     printf("\n Enter value to push: ");
     scanf("%d ",&value);
     push(value);
     break;
     
     case 2:
     pop();
     break;
     case 3:
     peek();
     break;
     case 4:
     display();
     break;
     case 5:
     printf("\n Exiting Program");
     return 0;
     default:
     printf("\n Invalid choice");
     }
     }
     }
     
