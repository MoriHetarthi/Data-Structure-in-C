#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAX 20

struct stack
{
    int elem[MAX];
    int top;
};
typedef struct stack STACK;
STACK s;

int isEmpty(void);
int isFull(void);
int push(int element);
int pop(void);
int evaluate(int op1,int op2,char x);

int main()
{
    char exp[20];
    int op1,op2,ans;
    int i=0;
    s.top=-1;
    printf("Enter the expression:");
    gets(exp);

    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
            push(exp[i]-48);

        else{
            op2=pop();
            op1=pop();
            ans=evaluate(op1,op2,exp[i]);
            push(ans);
        }
        i++;

    }

    printf("Answer is: %d",pop());
    return 0;

}


int isFull(void)
{
    if(s.top == MAX-1)
    {
        return 1;
    }
    else{
        return 0;
    }

}

int isEmpty(void)
{
    if(s.top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int push(int element)
{
    if(isFull())
    {
        return 0;
    }
    else{
        s.top++;
        s.elem[s.top]=element;
    }
}

int pop(void)
{
    if(isEmpty())
    {
        return 0;
    }
    else{
        return(s.elem[s.top--]);
    }

}

int evaluate(int op1,int op2,char x)
{
    if(x=='+')
        return(op1+op2);
    if(x=='-')
        return(op1-op2);
    if(x=='*')
        return(op1*op2);
    if(x=='/')
        return(op1/op2);
    if(x=='$')
        return pow(op1,op2);



}




