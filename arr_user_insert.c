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
    printf("Enter the element position to insert element : ");
    scanf("%d", &pos);

    if(pos < 0 || pos >n)
    {
        printf("Invalid position.....! Please enter position%d",n);
    }
    else
    {
        for(i=pos;i<n;i--)
        {
                arr[i] = arr[i - 1];
        }
        n++;

        printf("\n Elements of array after insert: ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
}

void main()
{
    user_insert();
}