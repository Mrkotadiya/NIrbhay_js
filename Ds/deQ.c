#include<stdio.h>
#include <stdlib.h>
#define n 5
int array[n],i,front,rear,choice;
void insert_rear()
{ 
    printf("\nBefore --> front :%d,\trear:%d",front,rear);       
    int added_item;
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        printf("\nQueue overflow");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == n - 1)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    printf("Inupt the elementfor adding queue : ");
    scanf("%d",&added_item);
    array[rear]= added_item;
    printf("\nAfter --> front :%d,\trear:%d",front,rear);       
}
void insert_front()
{
    printf("\nAfter --> front :%d,\trear:%d",front,rear);       
    int added_item;
    if((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        printf("\n Queue Overflow");
    }
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if(front == 0)
        front = n -1;
    else
        front = front -1;
    printf("\n Input the element for adding in queue: ");
    scanf("%d",&added_item);
    array[front]= added_item;
    printf("\nAfter --> front :%d,\trear:%d",front,rear);       
}
void delete_rear()
{
       if(front== -1)
    {
        printf("\n queue underflow\n");
        return;        
    }
    printf("\n Element deleted form queue is:%d \n",array[rear]);
    if(front == rear)
    {
        front = -1;
        rear = -1;        
    }
    else if (rear == 0)
        rear = n -1;
    else 
        rear = rear -1;

}
void delete_front()
{
    if(front == -1)
    {
        printf("\n Queue UnderFlow\n");
        return;
    }
    printf("\n Element delete from queue is : %d \n",array[front]);
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if(front == n -1)
        front=0;
    else
        front = front +1;
}
void display_queue()
{
    int front_pos = front , rear_pos = rear;
    if (front == -1)
    {
        printf("\n Queue is empty \n");
        return ;
    }
    printf("\n Queue elements: \n");
    if(front_pos <= rear_pos)
    {
        while(front_pos <= rear_pos)
        {
            printf("\t%d", array[front_pos]);
            front_pos++;
        }
    }
else
    {
        while(front_pos <= n -1)
        {
            printf("%d", array[front_pos]);
            front_pos++;
        }
        front_pos =0;
        while (front_pos <= rear_pos)
        {
            printf("%d", array[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}

 int main()
{
    front = rear = -1;
    do
    {
        printf("\n\n1. insert_rear\n2. insert_front\n3. delete_rear\n4. delete_front\n5. display_queue\n6. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_rear();
            break;
        case 2:
            insert_front();
            break;
        case 3:
            delete_rear();
            break;
        case 4:
            delete_front();
            break;
        case 5:
            display_queue();
            break;
        case 6:
            break;
        }
    } while (choice != 6);
    return 0;
}