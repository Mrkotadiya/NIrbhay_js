#include<stdio.h>
void user_insert()
{
    int a[120],n,i,key,value;
    printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter value[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("Enter insert array:");
    scanf("%d",&key);
    printf("ENTER VALUE : ");
    scanf("%d",&value);
    for(i=n;i>=key;i--)
    {
        a[i]=a[i-1];
    }
    a[key]=value;
    for(i=0;i<n+1;i++)
    {
        printf("\n[%d]\t%d",i,a[i]);
    }
}
void main()
{
    user_insert();
}