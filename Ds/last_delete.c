#include<stdio.h>
void last_delete()
{
     int a[120],i,n;
    printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter value[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        printf("\n[%d]\t%d",i,a[i]);
    }
}
void main()
{
    last_delete();
    
}