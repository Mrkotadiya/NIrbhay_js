#include<stdio.h>
void user_delete()
{
    int a[120],n,i,key;
    printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter value[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("Enter delete array:");
    scanf("%d",&key);
    for(i=key;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("\n[%d]\t%d",i,a[i]);
    }
}
void main()
{
    user_delete();
}