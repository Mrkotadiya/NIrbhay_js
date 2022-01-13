#include<stdio.h>
int i,n,a[120],b,key,value;
void Menu()
{
    printf("\nMenu");
    printf("\n1.First Element Insert");
    printf("\n2.First Element Delete");
    printf("\n3.Last Element Insert");
    printf("\n4.Last Element Delete");
    printf("\n5.User Element Insert");
    printf("\n6.User Element Delete");
    printf("\n7.SearchingIndex");
    printf("\n8.SearchingValue");
    printf("\n9.Exit");
    printf("\nEnter Your Choice:");
}

int first_insert()
{
  
    for (i=n;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=1000;
    n++;
    printf("Enter element Value");
    scanf("%d",&a);
    for(i=0;i<n+1;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }
}

void first_delete()
{
    for (i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }
}

void last_insert()
{
   
     a[n]=1000;
    // printf("Enter Value=");
    // scanf("%d",&a);
    for(i=0;i<n+1;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }
}

void last_delete()
{
   
    printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter value[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        printf("\n[%d]\t%d",i,a[i]);
    }
}

void user_insert()
{
  
    printf("Enter insert array:");
    scanf("%d",&key);
    printf("ENTER VALUE : ");
    scanf("%d",&value);
    for(i=n;i>=key;i--)
    {
        a[i]=a[i-1];
    }
    a[key]=value;
    for(i=0;i<n+1;i++)
    {
        printf("\n[%d]\t%d",i,a[i]);
    }
}

void user_delete()
{
  
    printf("Enter delete array:");
    scanf("%d",&key);
    for(i=key;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("\n[%d]\t%d",i,a[i]);
    }
}

void SreachingIndex()
{
    printf("\nEnter the array Element you want to find Array Index=");
    scanf("%d",&b);
   for(i=1;i<=n;i++)
    {
        if(a[i]==b)
        {
            printf("%d :  A[%d]",a[i],i);
        }
    }
}
void sreaching_Value()
{
     int i,n,a[120],b;
    printf("\nEnter the array index you want to find element=");
    scanf("%d",&b);
   printf("[%d]\t\t %d",b,a[b]);
}

void disply()
{
     int choice;
    do
    {
        Menu();
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                first_insert();
                break ;
            case 2:
                insert();
                first_delete();
                break;
            case 3:
                insert();
                last_insert();
                 break;
            
            case 4:
                insert();
                last_delete();
                break;
            case 5:
                 insert();
                user_insert();
                break;
            case 6:
                insert();
                user_delete();
                break;
            case 7:
                insert();
                SreachingIndex();
                break;
            case 8:
                insert();
                sreaching_Value();
                break;
            case 9:
                break;
                printf("Invalid NO.");
        }
    }while(choice !=7);       

}

void main()
{
    int i,n,a[120];
     printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] : ",i);
        scanf("%d",&a[i]);
    }
   
    disply();
}