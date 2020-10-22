#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node* next;
};

struct node *head=0,*temp=0;


void insertAtBeg(int value);
void traverse(void);
void implement(int value);
void insertAtEnd(int value);
void insertAtSpecific(int value,int pos);
void deleteAtBeg(void);
void deleteAtEnd(void);
void deleteAtSpecific(int pos);

int main()
{
    int choice = 0;
    struct node* head=0;
    struct node* temp=0;
    int value =0;
    int pos=0;

    while(1)
    {
        printf("Enter your choices\n");
        printf("1. Insertion at beginning:\n2. Insertion at end:\n3. Insertion at specified position:\n4. Deletion at beginning:\n5. Deletion at end:\n6. Deletion at specified position:\n7. Traverse and display:\n8. Normal implementation of linked list:\n");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
            case 1:
                printf("Enter data you want to enter:\n");
                scanf("%d",&value);
                insertAtBeg(value);
                break;

            case 2:
                printf("Enter data you want to enter:\n");
                scanf("%d",&value);
                insertAtEnd(value);
                break;

            case 3:
                printf("Enter the position:\n");
                scanf("%d",&pos);
                printf("Enter the data:\n");
                scanf("%d",&value);
                insertAtSpecific(value,pos);
                break;

            case 4:
                deleteAtBeg();
                break;

            case 5:
                deleteAtEnd();
                break;

            case 6:
                printf("Enter the position which you want to delete:\n");
                scanf("%d",&pos);
                deleteAtSpecific(pos);
                break;

            case 7:
                traverse();
                break;

            case 8:
                printf("Enter the data:\n");
                scanf("%d",&value);
                implement(value);
                break;

            case 9:
                return 0;


        }


    }
}

void insertAtBeg(int value)
{
    struct node* newnode = ((struct node* )malloc(sizeof(struct node)));
    newnode->data=value;
    newnode->next = head;
    head = newnode;


}


void traverse(void)
{
    temp=head;
    if(temp==0)
    {
        printf("Empty list:\n");
    }
    else{
    printf("Your list is:\n");

    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
       }
    }


}


void implement(int value)
{
    struct node* newnode = ((struct node* )malloc(sizeof(struct node)));
    newnode->next = 0;
    newnode->data=value;
    if(head==0)
    {
        head = temp = newnode;

    }
    else{

        temp->next = newnode;
        temp = newnode;

    }

}

void insertAtEnd(int value)
{
    struct node* newnode = ((struct node* )malloc(sizeof(struct node)));
    newnode->data = value;
    newnode->next = 0;
    temp = head;
    while(temp->next!=0)
    {
        temp = temp->next;
    }
    temp->next = newnode;

}

void insertAtSpecific(int value,int pos)
{
    struct node* newnode = ((struct node* )malloc(sizeof(struct node)));
    newnode->data = value;
    int count=0;
    int i =1;
    temp = head;
    while(temp!=0)
    {
        temp=temp->next;
        count++;
    }
    temp = head;
    if(pos>count){
        printf("Invalid position");
    }

    else{
        while(i<pos)
    {
        temp=temp->next;
        i++;

    }
    newnode->next=temp->next;
    temp->next=newnode;
    }


}

void deleteAtBeg(void)
{
    temp = head;
    head = temp->next;
    free(temp);

}

void deleteAtEnd(void)
{
    struct node* delnode;
    temp = head;
    while(temp->next!=0)
    {
        delnode = temp;
        temp = temp->next;
    }

    if(head==temp)
    {
        head=0;
    }
    else{
        delnode->next=0;

    }
    free(temp);
}

void deleteAtSpecific(int pos)
{
    struct node* prenode;
    int i =1;
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    prenode = temp->next;
    temp->next = prenode->next;
    free(prenode);

}
