#include<stdio.h>
// void sreach()
// {
//      int i,n,a[120],b;
//      printf("Enter Value for Array:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("\nA[%d] : ",i);
//         scanf("%d",&a[i]);
//     }
//     printf("\nEnter the array index you want to find element=");
//     scanf("%d",&b);
   
//    printf("[%d]\t\t %d",b,a[b]);

// }


void SreachingIndex()
{
    int i,n,a[120],b;
     printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the array Element you want to find Array Index=");
    scanf("%d",&b);
   
   //printf("[%d]\t\t %d",a[b],b);

   for(i=1;i<=n;i++)
    {
        if(a[i]==b)
        {
            printf("%d :  A[%d]",a[i],i);
        }
    }

}
void main()
{
    Sreach();    

}
