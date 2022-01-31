#include<stdio.h>
int main()
{
    int n1,i,n2,j,n3;
    printf("Enter the size of the first array:\n");
    scanf("%d",&n1);
    printf("Enter the array elements:\n");
    int a[n1];
        for(i=0;i<n1;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n1;i++)
        {
        int temp;
            for(j=i+1;j<n1;j++)
            {
                if(a[i]>a[j])
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
            }
        }
        printf("The sorted array is:\n");
        for(i=0;i<n1;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\nEnter the size of the second array:\n");
        scanf("%d",&n2);
        printf("Enter the array elements:\n");
        int b[n2];
        for(i=0;i<n2;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<n2;i++)
        {
        int temp;
            for(int j=i+1;j<n2;j++)
            {
                if(b[i]>b[j])
                {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
                }
            }
        }
        printf("The sorted array is:\n");
        for(i=0;i<n2;i++)
        {
            printf("%d\t",b[i]);
        }
        n3=n1+n2;
            printf("\nThe merged array is:\n");
        int c[n3];
        for(i=0;i<n1;i++)
        {
            c[i]=a[i];
        }
        int k=n1;
        for(i=0;i<n2;i++)
            {
            c[k]=b[i];
            k++;
            }
        for(i=0;i<n3;i++)
        {
            int temp;
        for(int j=i+1;j<n3;j++)
        {
            if(c[i]>c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
        }
        for(i=0;i<n3;i++)
        {
            printf("%d\t",c[i]);
        }
        }
}

