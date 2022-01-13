#include<stdio.h>

// int first_insert()
// {
//     int i,n,a[120];
//      printf("Enter Value for Array:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("\nA[%d] : ",i);
//         scanf("%d",&a[i]);
//     }
//     for (i=n;i>0;i--)
//     {
//         a[i]=a[i-1];
//     }
//     a[0]=1000;
//     for(i=0;i<n+1;i++)
//     {
//         printf("\nA[%d] : %d",i,a[i]);
//     }
// }
void sreaching_Value()
{
     int i,n,a[120],b;
     printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the array index you want to find element=");
    scanf("%d",&b);
   
   printf("[%d]\t\t %d",b,a[b]);

}
// void Sreach()
// {
//     int x, 
//     printf("\nEnter the array index you want to find element=");
//     scanf("%d",&x);
   
//    printf("[%d]\t\t %d",a[x],x);
// }
int main()
{
    // first_insert();
    sreach();
  //  Sreach();
}
