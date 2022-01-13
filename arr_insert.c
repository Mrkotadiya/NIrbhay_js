#include<stdio.h>
void user_insert()
{
    int arr[100],i,n,pos;
    printf("enter the array size=");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element position to insert array element : ");
    scanf("%d", &pos);


    if(pos < 0 || pos >n)
    {
        printf("Invalid position.....! Please enter position%d",n);
    }
    else
    {
        for(i=pos+1; i<n; i--)
        {
            arr[i] = arr[i - 1];
        }
        n++;
        printf("\n Where you want to add element: ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
}
int main()
{
    user_insert();
}