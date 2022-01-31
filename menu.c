int a[20],position,element;
int n=0;
void create();
void insert();
void display();
void delete();
void traversal();
void search();
void main()
{
int choice;
while(1)
{
printf("menu/n");
printf("1.create,2.insert,3.display,4.delete,5.traversal,6.search,7.exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:create();
break;
case 2:insert();
break;
case 3:display();
break;
case 4:delete();
break;
case 5:traversal();
break;
case 6:search();
break;
case 7:exit(1);
break;
default:printf("invalid");
break;

}
}
}
void create()
{
int i;
printf("enter number of elements:\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
void insert()
{
int i;

printf("enter position for insertion");
scanf("%d",&position);
if(position>n)
{
    printf("array is full");
}
else
{


printf("enter the value to be insert:");
scanf("%d",&element);
for(i=n-1;i>=position;i--)
{
a[i+1]=a[i];
}
a[position]=element;
n=n+1;
display();
}
}
void display()
{
int i;
if(n==0)
{
printf("number of elements");
}
printf("array elements are\n");
for(i=0;i<n;i++)
printf("%3d",a[i]);
}
void delete()
{
int i;
if(n==0)
printf("array is empty");


printf("enter the position to delete");
scanf("%d",&position);

if(position>=n);
element=a[position];
printf("deleted element\n");
for(i=position;i<n-1;i++)
{
a[i]=a[i+1];
}
n=n-1;
display();
}
void traversal()
{
int i;
printf("array elements are\n");
for(i=0;i<n;i++)
printf("%3d",a[i]);

}
void search()
{
int i,tosearch,flag;
printf("enter the element to be search");
scanf("%d",&tosearch);
flag=0;

for(i=0;i<n;i++)
{
    if(a[i]==tosearch)
    {


        flag=1;
        break;
    }
}
if(flag==1)
{
    printf("found at position %d position",tosearch,i+1);
}
    else{
        printf("%d not found",tosearch);
    }
}

