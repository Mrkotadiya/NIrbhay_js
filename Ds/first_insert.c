#include<stdio.h>
int first_insert()
{
    int i,n,a[120];
     printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for (i=n;i>0;i--)
    {
        a[i]=a[i-1];
    }
    // a[0]=1000;
    printf("Enter element Value");
    scanf("%d",&a);
    for(i=0;i<n+1;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }
}
int main()
{
    first_insert();
}
