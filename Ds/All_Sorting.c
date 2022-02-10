#include<stdio.h>
#include<stdlib.h>
// #define n 10
int n;
int printArray(int a[])
{
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}
int bubble_sort(int a[])
{
    int i,j,key;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j] > a[j+1])
            {
                key = a[j];
                a[j] = a[j+1];
                a[j+1] = key;
            }
        }
    }
    printArray(a);
}
int selection_sort(int a[])
{
    int i,j,key;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                key=a[j];
                a[i]=a[j];
                a[i]=key;
            }
        }
    }
    printArray(a);
}
int binarysearch(int a[], int lb, int ub, int val)
{
    int mid;
    if(ub >= lb)
    {
        mid= (lb + ub)/ 2;
        if(a[mid] == val)
        {
            return mid+1;
        }
        else if(a[mid] < val)
        {
            return binarysearch(a,mid+1,ub,val);
        }
        else 
        {
            return binarysearch(a,lb,mid-1,val);
        }
    }
    return -1;
}
int main()
{
    int a[100],min=1,max=100,val;
    printf("Enter Array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a[i]=(rand()%(max-min+1))+min;
    }
    printArray (a);  
    printf("\n"); 
    bubble_sort(a);
    printf("\n");
    selection_sort(a);
    printf("\n Enter element for search:");
    scanf("%d",&val);
    int res = binarysearch(a,0,n-1,val);
    if(res == -1)
    {
        printf("\n Element is not Present");
    }   
    else
    {
        printf("\n Position is:%d",res);
    }
    return 0;
}