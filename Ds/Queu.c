#include<stdio.h>
#define n 3
int arr[n],i,front=-1,rear=-1,Choice;
void Menu()
{
    do
    {
        printf("\n\n1.Insert\t2.delete\t3.Display\t4.Exit");
        printf("\n Enter your Choice=");
        scanf("%d",&Choice);
        switch (Choice)
        {
        case 1:
              insert();
              break;
        case 2:
                delete();
                break;
        case 3: 
               display();
               break;
        case 4:
                break;      
                default:
                    printf("\nInvalid Choice.......!");    
        }

    }while (Choice!=4);
}
void insert()
{
    int r;
    if(front==-1)
        printf("\nQueue is Empty");
    else
    {
        if(front==n-1)        
            front=0;
        printf("\n\t Enter the Queue Element=");
        scanf("%d",&r);
        rear++;
        arr[rear]=r;
    }
}
void First_Insert()
{

}
void delete()
{
    if(front==-1 || front>rear)
        printf("\nQueue is Empty");
    else
    {
        printf("\nQueue delete Element Is=%d",arr[front]);
        front++;
    }
}
void display()
{
    if(front==-1)
        printf("\n Queue Is Emoty");
    else
    {
        for(i=front;i<=rear;i++)
            printf("Array Is=%d",arr[i]);
    }
}
void main()
{
    Menu();
}