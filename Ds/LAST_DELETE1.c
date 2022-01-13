#include<stdio.h>
#include<conio.h>
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
    for(i=0;i<n;i++);
     {
        a[i-1]=a[i];
     }
    for(i=0;i<n-1;i++)
    {
        printf("\n[%d]  %d",i,a[i]);
    }
}
void main()
{
       last_delete();
}