#include<stdio.h>
void first_delete()
{
    int i,n,a[120];
     printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }
}
void main()
{
    first_delete();
}

