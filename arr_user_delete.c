#include<stdio.h>
// int last_insert()
// {
//     int i,n=5,a[120];
//     for(i=0;i<n;i++)
//     {
//         printf("\nA[%d] : ",i);
//         scanf("%d",&a[i]);
//     }
//     //a[n]=1000;
//     for(i=0;i<n+1;i++)
//     {
//         printf("\nA[%d] : %d",i,a[i]);
//     }
// }
// int main()
// {
//     last_insert();
// }
void last_delete()
{
    int arr[100],i,n,pos;
    printf("enter the array size=");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element position to delete : ");
    scanf("%d", &pos);


    if(pos < 0 || pos >n)
    {
        printf("Invalid position.....! Please enter position%d",n);
    }
    else
    {
        for(i=pos-1; i<n-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("\n Elements of array after delete: ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
}
int main()
{
    last_delete();
}
































