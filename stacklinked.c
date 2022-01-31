#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 *top=NULL;
void push();
void pop();
void display();
int main()
{
    int choice;
    while(1)
    {
    printf("\n Menu\n");
    printf("1.push\n2.pop\n3.display\n4.exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: push();
        break;
    case 2: pop();
        break;
    case 3: display();
        break;
    case 4:exit(0);
        default: printf("\nwrong selection");


    }
    }
}
void push()
{
    int value;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter a the value to insert");
    scanf("%d",&value);
    newnode->data=value;
    if(top==NULL)
    //printf("stack is empty");
        newnode->next=NULL;
    else

        newnode->next=top;
        top=newnode;
        printf("\nInsertion is success\n");
        display();
}
void pop()
{
    if(top==NULL)
        printf("Stack is empty");
    else
    {
        struct node *temp=top;
        printf("\nDeleted element:%d\t",temp->data);
        top=temp->next;
        free(temp);
        display();
    }
}
void display()
{
    if(top==NULL)
    printf("\nstack is empty");
    else
    {
    struct node *temp=top;
    while(temp->next!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d->NULL",temp->data);
    }
}
