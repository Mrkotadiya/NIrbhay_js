#include <stdio.h>
#include <stdlib.h>
#define Size 3 
int deque_arr[Size], front=-1, rear=-1,i,choice; 
int main()
{
    do
    {
        printf("\n1.inser_front\n2.insert_rear \n3.delete_front\n4. delete_rear\n5. display_queue\n6. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                 insert_rear();
                 break;
            case 2:
                insert_rear();
                break;
            case 3:
               delete_front();
                break;
            case 4:
                delete_rear();
                break;
            case 5:
                display_queue();
                break;
            case 6:
                break;
                default:
                    printf("Sorry, invalid choice!\n");
                
        }
    } while(choice!=6);
    return 0;
}
void inser_front()
{
    printf("\n Before--> front :%d, rear:%d",front,rear);   
    int add_item;
    if((front==0 && rear==Size-1)|| (front==rear+1))
    {
        printf("\n Queue overlow");
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(front==0)
        front=Size-1;
    else
        front=front-1;
    printf("\n input the Element for addinggin queue:");
    scanf("%d",&add_item);
    deque_arr[rear]=add_item;
    printf("\n After --> front:%d, trear->:%d",front,rear);
}
void insert_rear()
{   
    printf("\n Before--> front :%d, rear:%d",front,rear);   
    int add_item;
    if((front==0 && rear==Size-1)|| (front==rear+1))
    {
        printf("\n Queue overlow");
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(rear == Size-1)
        rear=0;
    else
        rear=rear+1;
    printf("\n input the Element for addinggin queue:");
    scanf("%d",&add_item);
    deque_arr[rear]=add_item;
    printf("\n After --> front:%d, trear->:%d",front,rear);
}
void display_queue()
{
    int front_pos=front,rear_pos=rear;
    if(front==-1)
    {
         printf("\n Queue overlow");
        return;
    }
    printf("\n\n Queue element:");
    if(front_pos<=rear_pos)
    {
        while(front_pos<=rear_pos)
        {
            printf("%d",deque_arr[front_pos]);
            front_pos++;
        }
    }
    else
    {
        while(front_pos<=rear_pos)
        {
            printf("%d",deque_arr[front_pos]);
            front_pos++;
        }
        front_pos=0;
        while(front_pos<=rear_pos)
        {
            printf("%d",deque_arr[front_pos]);
            front_pos++;
        }
    }printf("\n");
} 
void delete_front()
{
     if(front== -1)
    {
        printf("\n queue underflow");
        return;        
    }
    printf("\n Element deleted form queue is:%d",deque_arr[rear]);
    if(front == rear)
    {
        front = -1;
        rear = -1;        
    }
    else if(front==Size-1)
        front=0;
    else
        front=front+1;

}
void delete_rear()
{
    if(front== -1)
    {
        printf("\n queue underflow");
        return;        
    }
    printf("\n Element deleted form queue is:%d",deque_arr[rear]);
    if(front == rear)
    {
        front = -1;
        rear = -1;        
    }
    else if (rear == 0)
        rear = Size -1;
    else 
        rear = rear -1;
}

// void frist_insert()
// {
//     int element;
//     if (rear == n - 1)
//         printf("Queue Overflow\n");
//     else
//     {
//         if (front == - 1)
//         front = 0;       
//         printf("\nEnter the element to inserted in the queue: ");
//         scanf("%d", &element);
//         rear++;
//         queue[rear] = element;
//     }
// }
// void last_delete()
// {
//         if(front==-1 && rear==-1)
//         {
//                 front=0;
//                 rear=0;
//                 printf("Error...!");
//         }
//         else
//         {
//              for(i=front;i<n-1;i++)
//                 printf("\n\t%d",queue[i]);
//         }

// }
// void delet()
// {
//     if (front == - 1 || front > rear)
//         printf("Queue Underflow \n");
//     else
//     {
//         printf("The deleted element in the queue is: %d\n", queue[front]);
//          front++;
//     }
// }
// void display()
// {
//     if (front == - 1)
//         printf("Queue underflow\n\n\n");
//     else
//     {
//          printf("The elements of the queue are:\n");
//          for (i = front; i <= rear; i++)
//          printf("%d\n", queue[i]);
//     }
// }