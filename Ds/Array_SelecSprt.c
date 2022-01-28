#include<stdio.h>
#include<stdlib.h>
#define n 5
int array[100],i,j,key;
void ShowArray(int array[])
{
    for(i=0;i<n;i++)
        printf("\n%d",array[i]);
}
void main()
{
    for(i=0;i<n;i++)
        array[i] =rand()%1000;

    ShowArray(array);
}