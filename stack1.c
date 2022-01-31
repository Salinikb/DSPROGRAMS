
#define max 50
void push();
void pop();
void display();
int top=-1;
int stack[max];
void main()
{
int choice;
while(1)
{


printf("\nmenu");
printf("\n1.push\n 2.pop\n 3.display\n 4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{


case 1: push();
        break;
case 2: pop();
        break;

case 3:  display();
        break;
case 4:exit(0);
default: printf("\nwrong selection");
}
}
}
void push()
{


int n;

if(top==max-1)
printf("stack is full insertion not possible:");
else
{
    printf("enter the element to insert:");
    scanf("%d",&n);
    top++;
stack[top]=n;
printf("insertion success\n");
display();
}
}
void pop()
{
if(top==-1)
printf("stack is empty deletion not possible\n");
else
{
printf("deleted :%d",stack[top]);
top--;
display();
}
}
void display()
{
if(top==-1)
printf("\n stack is empty:");
else
{
int i;
printf("stack elements are:\n");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}
}
