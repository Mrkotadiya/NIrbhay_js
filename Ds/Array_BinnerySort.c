#include<stdio.h>
#include<stdlib.h>
#define n 10
 int array[100],i;
void ShowArray(int array[])
{
    for(i=0;i<n;i++)
        printf("\n%d",array[i]);
}
int BinneySreach(int array[],int lb,int ub,int val)
{
    int mid;
    if(ub>=lb)
    {
        mid=(lb+ub)/2;
        if(array[mid]==val)
            return mid+1;
        else if(array[mid]<val) 
        {
            return BinneySreach(array,mid+1,ub,lb);
        }
        else
        {
            return BinneySreach(array,lb,mid-1,val);
        }
    }
    return -1;
}
void main()
{
    int val;
    for(i=0;i<n;i++)
        array[i] =rand()%100;

    ShowArray(array);

    printf("Enter Element For Sreach=");
    scanf("%d", &val);

    int res=BinneySreach( array[i], 0,n,val);
    if(res==-1)
    {
        printf("\n\tElement is not present in Array");
    }
    else    
        printf("\n\tElement is present and Element Position Is=%d",res);
    return 0;
}