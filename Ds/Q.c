// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//         int priority;
//         int info;
//         struct node *link;
// }*front=NULL;

// void insert(int item, int item_priority);
// int del();
// void display();
// int isEmpty();

// int main()
// {
//         int choice,item,item_priority;
//         while(1)
//         {
//                 printf("\n1.Insert\n");
//                 printf("2.Delete\n");
//                 printf("3.Display\n");
//                 printf("4.Quit\n");
//                 printf("\nEnter your choice : ");
//                 scanf("%d", &choice);

//                 switch(choice)
//                 {
//                  case 1:
//                         printf("\nInput the item to be added in the queue : ");
//                         scanf("%d",&item);
//                         printf("\nEnter its priority : ");
//                         scanf("%d",&item_priority);
//                         insert(item, item_priority);
//                         break;
//                  case 2:
//                         printf("\nDeleted item is %d\n",del());
//                         break;
//                  case 3:
//                         display();
//                         break;
//                  case 4:
//                         exit(1);
//                  default :
//                         printf("\nWrong choice\n");
//                 }/*End of switch*/
//         }/*End of while*/

//         return 0;
// }/*End of main()*/

// void insert(int item,int item_priority)1
// {
//         struct node *tmp,*p;

//         tmp=(struct node *)malloc(sizeof(struct node));
//         if(tmp==NULL)
//         {
//                 printf("\nMemory not available\n");
//                 return;
//         }
//         tmp->info=item;
//         tmp->priority=item_priority;
//         /*Queue is empty or item to be added has priority more than first element*/
//         if( isEmpty() || item_priority < front->priority )
//         {
//                 tmp->link=front;
//                 front=tmp;
//         }
//         else
//         {
//                 p = front;
//                 while( p->link!=NULL && p->link->priority<=item_priority )
//                         p=p->link;
//                 tmp->link=p->link;
//                 p->link=tmp;
//         }
// }/*End of insert()*/

// int del()
// {
//         struct node *tmp;
//         int item;
//         if( isEmpty() )
//         {
//                 printf("\nQueue Underflow\n");
//                 exit(1);
//         }
//         else
//         {
//                 tmp=front;
//                 item=tmp->info;
//                 front=front->link;
//                 free(tmp);
//         }
//         return item;
// }/*End of del()*/

// int isEmpty()
// {
//         if( front == NULL )
//                 return 1;
//         else
//                 return 0;

// }/*End of isEmpty()*/


// void display()
// {
//         struct node *ptr;
//         ptr=front;
//         if( isEmpty() )
//                 printf("\nQueue is empty\n");
//         else
//         {       printf("\nQueue is :\n");
//                 printf("\nPriorit Item\n");
//                 while(ptr!=NULL)
//                 {
//                         printf("%5d%5d\n",ptr->priority,ptr->info);
//                         ptr=ptr->link;
//                 }
//         }
// }/*End of display() */




// // #include <stdio.h>
// // #include <stdlib.h>
// // #define n 3
// // int arr[n],front, rear,i,choice,front=-1,rear=-1;
// // int main()
// // {
// //     do
// //     {
// //         printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
// //         printf("Enter your choice:");
// //         scanf("%d", &choice);
// //         switch (choice)
// //         {
// //         case 1:
// //             insert();
// //             break;
// //         case 2:
// //             delet();
// //             break;
// //         case 3:
// //             display();
// //             break;
// //         case 4:
// //                break;
// //         default:
// //             printf("Sorry, invalid choice!\n");
// //             // break;
// //         }
// //     } while (choice != 4);
// //     return 0;
// // }
// // void insert()
// // {
// //     int r;
// //     if (rear == n - 1)
// //         printf("Queue Is OverFlow...........!\n");
// //     else
// //     {
// //         if (front == -1)
// //             front = 0;
// //         printf("Enter the element to be inserted in the queue: ");
// //         scanf("%d", &r);
// //         rear++;
// //         arr[rear] = r;
// //     }
// // }
// // void delet()
// // {
// //     if (front == -1 || front > rear)
// //     {
// //         printf("Queue Underflow \n");
// //     }
// //     else
// //     {
// //         printf("The deleted element in the queue is: %d\n", arr[front]);
// //         front++;
// //     }
// // }
// // void display()
// // {
// //     int i;
// //     if (front == -1)
// //     {
// //         printf("Queue Is Empty.........!</>\n");
// //     }
// //     else
// //     {
// //         printf("The elements of the queue are:\n");
// //         for (i = front; i <= rear; i++)
// //             printf("%d\n", arr[i]);
// //     }
// // }

#include <stdio.h>
#include <stdlib.h>
#define n 3 
int queue[n], front=-1, rear=-1,i,choice; 
int main()
{
    do
    {
        printf("\n\n1. Insert\n2. Delete\n3. Display\n4.Last_Delete\n5. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                 frist_insert();
                 break;
            case 2:
                delet();
                break;
            case 3:
                display();
                break;
            case 4:
               last_delete();
                break;
            case 5:
                break;
            default:
                printf("Sorry, invalid choice!\n");
                
        }
    } while(choice!=5);
    return 0;
}
void frist_insert()
{
    int element;
    if (rear == n - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == - 1)
        front = 0;       
        printf("\nEnter the element to inserted in the queue: ");
        scanf("%d", &element);
        rear++;
        queue[rear] = element;
    }
}
void last_delete()
{
        if(front==-1 && rear==-1)
        {
                front=0;
                rear=0;
                printf("Error...!");
        }
        else
        {
             for(i=front;i<n-1;i++)
                printf("\n\t%d",queue[i]);
        }

}
void delet()
{
    if (front == - 1 || front > rear)
        printf("Queue Underflow \n");
    else
    {
        printf("The deleted element in the queue is: %d\n", queue[front]);
         front++;
    }
}
void display()
{
    if (front == - 1)
        printf("Queue underflow\n\n\n");
    else
    {
         printf("The elements of the queue are:\n");
         for (i = front; i <= rear; i++)
         printf("%d\n", queue[i]);
    }
}