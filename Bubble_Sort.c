#include <stdio.h>
#include <stdlib.h>
#define n 5
int arr[100], i, j, key;
void array(int a[])
{
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);
}
void Bubble_Sort_Array(int a[])
{
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n - 1; j++)
        {
            if (arr[j] > arr[i])
            {
                key = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = key;
            }
        }
        printfarray(arr[j]);
        /*printf("\t\n\n%d",arr[i]);
        printf("\n\n\t%d",arr[j]);*/
    }
}
int main()
{
    for (i = 0; i < n; i++)
        arr[i] = rand() % 100;

    array(arr);
    Bubble_Sort_Array(arr);
    return 0;
}