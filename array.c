#include<stdio.h>
int first_insert()
{
    int i,n=5,a[120];
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for (i=n;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=1000;
    for(i=0;i<n-1;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }
}
int main()
{
    first_insert();
}








// void First_insert()
// {

//     int arr[100],i,n;
//     printf("Insret the Array Size=");
//     scanf("%d",&n);
//     for(i=0;i<5;i++)
//     {
//         printf("Array value=");
//         scanf("%d",&arr[i]);
//     }
//     //scanf("%d",&arr[i]);
//     for(i=0;i<n;i++)
//     {
//         arr[i-1]=arr[i];
//     }
//     for(i=9;i<=n;i++)
//     {
//         printf("\n %d\t\t%d",i,arr[i]);
//     }
// }
// void main()
// {
//     First_insert();
// }
