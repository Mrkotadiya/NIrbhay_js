#include<stdio.h>
#include<stdlib.h>
#define n 10
int main()
{
     int mid,array[100],i ,lb, ub,val;
     
    for(i=0;i<n;i++)
    {
         array[i] =rand()%100;
        printf("\n%d",array[i]);

    }
    if(ub>=lb)
    {
        mid=(lb+ub)/2;
        if(array[mid]==val)
            return mid+1;
        else if(array[mid]<val) 
        {
            return (array,mid+1,ub,lb);
        }
        else
        {
            return (array,lb,mid-1,val);
        }
    }
    return -1;
    int res=( array[i], 0,n,val);
    if(res==-1)
    {
        printf("\n\tElement is not present in Array");
    }
    else    
        printf("\n\tElement is present and Element Position Is=%d",res);

}