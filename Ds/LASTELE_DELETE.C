#include<stdio.h>
int last_insert()
{
    int i,n,a[120];
     printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] : ",i);
        scanf("%d",&a[i]);
    }
     a[n]=1000;
    // printf("Enter Value=");
    // scanf("%d",&a);
    for(i=0;i<n+1;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }
}
int main()
{
    last_insert();
}