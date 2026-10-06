#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*link;
};
struct node*head=NULL;

void InsertFirst()
{
 struct node*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
 {
  printf("\n No space available\n");
  return;
 }
 newnode->link=NULL;
 printf("Enter the value:");
 scanf("%d",&newnode->data);
 if(head==NULL)
 {
  head=newnode;
 }
 else
 {
  newnode->link=head;
  head=newnode;
 }
 printf("Element inserted %d",newnode->data);
}

void InsertLast()
{
 struct node*temp=head,*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
 {
  printf("\n No space available\n");
  return;
 }
 newnode->link=NULL;
 printf("\nEnter the element to insert last:\n");
 scanf("%d",&newnode->data);
 if(head==NULL)
 {
  head=newnode;
 }
 else
 {
  while(temp->link!=NULL)
  {
   temp=temp->link;
  }
  temp->link=newnode;
 }
 printf("\nElement inserted %d",newnode->data);
}

void InsertLocation()
{
    int key;
    struct node *temp = head, *newnode;
    if(head == NULL)
    {
        printf("\nList empty\n");
        return;
    }
    printf("Enter the element after which you want to add element: ");
    scanf("%d", &key);
    while(temp != NULL && temp->data != key)
    {
        temp = temp->link;
    }
    if(temp == NULL)
    {
        printf("\nValue does not exist\n");
        return;
    }
    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("\nNo space available\n");
        return;
    }
    printf("\nEnter the element to insert: ");
    scanf("%d", &newnode->data);
    newnode->link = temp->link;
    temp->link = newnode;
    printf("\nValue inserted successfully %d", newnode->data);
}


void DeleteFirst()
{
 struct node*temp=head;
 if(head==NULL)
 {
  printf("\n List empty\n");
  return;
 }
 head=temp->link;
 printf("\nvalue deleted %d\n",temp->data);
 free(temp);
}

void DeleteLast()
{
 struct node*temp=head,*prev=NULL;
 if(head==NULL)
 {
  printf("\n List empty\n");
  return;
 }
 if(temp->link==NULL)
 {
  printf("\nvalue %d deleted \n",temp->data);
  head=NULL;
  free(temp);
  return;
 }
 while(temp->link!=NULL)
 {
  prev=temp;
  temp=temp->link;
 }
 printf("\nvalue %d deleted\n",temp->data);
 prev->link=NULL;
 free(temp);
}

void DeleteLocation()
{
    int key;
    struct node *temp = head;
    struct node *prev = NULL;
    if (head == NULL)
    {
        printf("\nEmpty list\n");
        return;
    }
    printf("Enter the element that you want to delete: ");
    scanf("%d", &key);
    if (head->data == key)
    {
        temp = head;
        head = head->link;
        printf("\nValue %d is deleted\n", temp->data);
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->link;
    }
    if (temp == NULL)
    {
        printf("\nValue does not exist\n");
        return;
    }
    prev->link = temp->link;
    printf("\nValue %d is deleted\n", temp->data);
    free(temp);
}

void Search()
{
    struct node *temp = head;
    int pos = 0, found = 0, val;

    if (head == NULL)
    {
        printf("\nEmpty list\n");
        return;
    }

    printf("Enter the value to search: ");
    scanf("%d", &val);

    while (temp != NULL)
    {
        if (temp->data == val)
        {
            printf("\n%d value found at location %d\n",
                   temp->data, pos + 1);
            found = 1;
            break;   // Remove this if you want to find all occurrences
        }

        pos++;
        temp = temp->link;
    }

    if (!found)
    {
        printf("\nValue %d does not exist\n", val);
    }
}


void Display()
{
 struct node*temp=head;
 if(temp==NULL)
 {
  printf("\n List Empty");
  return;
 }
 printf("Element in the list:");
 while(temp!=NULL)
 {
  printf("%d\n",temp->data);
  temp=temp->link;
 }
}

void main()
{
 int choice;
 do
 {
  printf("\n\nSINGLY LINKED LIST");
  printf("\n1. Insert First\n2. Insert Last\n3. Insert Location\n4. Delete First\n5. Delete Last\n6. Delete Location\n7. Search\n8. Display\n9. Exit\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1: InsertFirst();
   	break;
   case 2: InsertLast();
   	break;
   case 3: InsertLocation();
   	break;
   case 4: DeleteFirst();
   	break;
   case 5: DeleteLast();
   	break;
   case 6: DeleteLocation();
   	break;
   case 7: Search();
   	break;
   case 8: Display();
   	break;
   case 9: printf("Exit");
   	exit(0);
   default:printf("Invalid choice");
  }
 }while(choice!=9);
}
