#define max 50
void insert();
void delete();
void display();
int rear=-1;
int front=-1;
int queue[max];
void main()
{
int choice;
while(1)
{


printf("\nmenu");
printf("\n1.insert\n 2.delete\n 3.display\n 4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{


case 1: insert();
        break;
case 2: delete();
        break;

case 3:  display();
        break;
case 4:exit(0);
default: printf("\nwrong selection");
}
}
}
void insert()
{


int n;

if(rear==max-1)
printf("queue is full insertion not possible:");
else
{
    printf("enter the element to insert:");
    scanf("%d",&n);
    if(front==-1)
    front=0;
    rear++;
queue[rear]=n;
printf("insertion success\n");
display();
}
}
void delete()
{
if(front==rear)
printf("queue is empty deletion not possible\n");
else
{
printf("deleted :%d",queue[front]);
front++;
display();
}
}
void display()
{
if(rear==-1)
printf("\n queue is empty:");
else
{
int i;
printf("queue elements are:\n");
for(i=front;i<=rear;i++)
printf("%d\n",queue[i]);
}
}
