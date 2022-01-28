#include<stdio.h>
#include<stdlib.h>
#define n 10
int arr[100],i,j,key,a;
void array(int arr[])
{
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void Bubble_short(int arr[])
{
    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                key=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=key;
            }
        }
    } array(arr);
}
int main()
{
    for(i=0;i<=n;i++)
    {
        arr[i]=(rand()%(100-51+1)+51);
    }
    array(arr);
    printf("\n\t");
    Bubble_short(arr);
    return 0;
}
