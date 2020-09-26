#include<stdio.h>
#include<stdlib.h>
#define MAX 6

struct cqueue
{
    int elem[MAX];
    int front,rear;
};
typedef struct cqueue CQUEUE;
CQUEUE q;

int enqueue(int element);
int dequeue(void);
int peek(void);
void traverse(void);

int main()
{
    int choice,num;
    q.front=-1;
    q.rear=-1;
    printf("CIRCULAR QUEUE\n\n");

    while(1)
    {
        printf("1. Enqueue operation:\n");
        printf("2. Dequeue operation:\n");
        printf("3. Peek operation:\n");
        printf("4. Traverse operation:\n");
        printf("5. EXIT:\n\n");

        printf("Enter your choice:\n");
        scanf("%d",&choice);
        printf("\n");

        switch(choice)
        {
        case 1:

            enqueue(num);
            break;

        case 2:
            num=dequeue();
            break;

        case 3:

            peek();
            break;

        case 4:
            traverse();

        case 5:
            return 0;

        }

    }

}


int enqueue(int element)
{

    if((q.front==0 && q.rear==MAX-1) || (q.front==q.rear+1))
    {
        printf("Overflow situation\n");
        return 0;
    }

    else
    {   printf("Enter the element you want to add:\n");
        scanf("%d",&element);
        if(q.rear==-1)
        {
            q.rear = 0;
            q.front = 0;
            q.elem[q.rear] = element;
        }
        else if(q.rear==MAX-1)
        {
            q.rear = 0;
            q.elem[q.rear] = element;
        }
        else{
                q.rear++;
                q.elem[q.rear] = element;
        }


    }
}

int dequeue(void)
{
    int num;
    if(q.front == -1)
    {
        printf("Queue is in underflow situation:");
    }

    else
    {
        num=q.elem[q.front];
        if(q.rear == q.front)
        {
            q.rear=-1;
            q.front=-1;
        }
        else if(q.front == MAX-1)
        {
            q.front = 0;

        }

        else{
            q.front++;
            printf("The deleted element is: %d\n",num);
        }
    }


}

int peek(void)
{
    if(q.front == -1)
    {
        printf("No values to display\n");
    }
    else{
        printf("The element at the top is: %d\n",q.elem[q.front]);
    }
}


void traverse(void)
{
    int i;
    printf("\n");
    if(q.front==-1)
    {
        printf("Queue is empty\n");
    }

    else{

        if(q.front<=q.rear)
        {
            for(i=q.front;i<=q.rear;i++)
                printf("\t%d\t",q.elem[i]);
        }

        else{
            for(i=q.front;i<MAX;i++)
               {
                   printf("\t%d\t",q.elem[i]);
               }
               for(i=0;i<=q.rear;i++)
               {
                   printf("\t%d\t",q.elem[i]);
               }
        }
    }
}















