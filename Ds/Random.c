#include<stdio.h>
#include<stdlib.h>
void array()
{
    int arr[100],i,a,n;
    printf("\n Enter the array Size=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        arr[i]=(rand()%(100-50+1)+50);
        printf("%d ",arr[i]);
    }
}
void main()
{
    array();

}

