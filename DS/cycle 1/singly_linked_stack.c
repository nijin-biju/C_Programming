#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*link;
};
struct node*top=NULL;

void push()
{
 struct node*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
 {
  printf("\n No space available\n");
  return;
 }
 newnode->link=NULL;
 printf("Enter the element to insert:");
 scanf("%d",&newnode->data);
 if(top==NULL)
 {
  top=newnode;
 }
 else
 {
  newnode->link=top;
  top=newnode;
 }
 printf("Element inserted %d",newnode->data);
}

void pop()
{
 struct node*temp=top;
 if(top==NULL)
 {
  printf("\n Stack Underflow\n");
  return;
 }
 printf("\n%d is popped\n",temp->data);
 top=temp->link;
 free(temp);
}

void peek()
{
 struct node*temp=top;
 if(top==NULL)
 {
  printf("\n Stack underflow\n");
  return;
 }
 printf("\nTop element is %d\n",temp->data);
}

void Display()
{
 struct node*temp=top;
 if(top==NULL)
 {
  printf("\n NO element");
  return;
 }
 printf("Element in the stack are:");
 while(temp!=NULL)
 {
  printf("%d\n",temp->data);
  temp=temp->link;
 }
}

void Search()
{
    struct node *temp = top;
    int pos = 0, found = 0, key;

    if (top == NULL)
    {
        printf("\nStack underflow\n");
        return;
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("\n%d element found at location %d\n",
                   temp->data, pos + 1);
            found = 1;
        }

        pos++;
        temp = temp->link;
    }

    if (!found)
    {
        printf("\nValue %d does not exist\n", key);
    }
}

void main()
{
 int choice;
 do
 {
  printf("\n\n----STACK----");
  printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Search\n6. Exit\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1: push();
   	break;
   case 2: pop();
   	break;
   case 3: peek();
   	break;
   case 4: Display();
   	break;
   case 5: Search();
   	break;
   case 6: printf("Exit");
   	break;
   default:printf("Invalid choice");
  }
 }while(choice!=6);
}
