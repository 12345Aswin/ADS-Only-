#include <stdio.h>
#define size 5
void insertq(int[], int);
void deleteq(int[]);
void searchq(int[]);
void display(int[]);
int front=-1;
int rear=-1;
int flag=0,s,i;
int main()
{
    int n,ch,flag=0;
    int queue[size];
    do
    {
        printf("\n Circular Queue:\n1. Insert \n2. Delete\n3. Display\n4. search\n5.Exit");
        printf("\nEnter Choice? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                insertq(queue, n);
                break;
            case 2:
                deleteq(queue);
                break;
            case 3:
                display(queue);
                break;
	    case 4:
		searchq(queue);
		break;
	    case 5:
		printf("Exited successfully");
		break;
        }
    }while (ch != 5);
}
void insertq(int queue[], int item)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        printf("queue is full");
        return;
    }
    else if (rear==-1)
    {
        rear++;
        front++;
    }
    else if (rear==size - 1 && front>0)
    {
        rear=0;
    }
    else
    {
        rear++;
    }
    queue[rear]=item;
}

void deleteq(int queue[])
{
    if (front==-1)
    {
        printf("Queue is empty ");
    }
    else if (front == rear)
    {
        printf("\ndeleted element is %d", queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\n %d deleted", queue[front]);
        front++;
    }
}

void display(int queue[])
{
    int i;
    printf("\n");
    if (front>rear)
    {
        for (i=front; i<size; i++)
        {
            printf("%d ", queue[i]);
        }
        for (i=0; i<=rear; i++)
            printf("%d ", queue[i]);
    }
    else
    {
        for (i=front; i<=rear; i++)
            printf("%d ", queue[i]);
    }
}
void searchq(int queue[])
{
	printf("Enter the element to be searched");
	scanf("%d",&s);
	for(i=front;i<=rear;i++)
if(queue[i]==s)
{
flag=1;
break;
}
else
{
flag=0;
}
if(flag==1)
{
printf("searched element found");
}
else
{
printf("searched element not found");
}
}
