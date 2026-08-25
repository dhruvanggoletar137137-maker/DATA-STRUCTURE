//92500588002
//Write a program to find factorial of the number

#include<stdio.h>
#define MAX 100

int stack[MAX],top=-1;
void push(int value);
int pop();

void main()
{
    int n,i,fact=1;
    printf("\n Enter a value : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        push(i);
    }
    while(top!=-1)
    {
        fact=fact*pop();
    }
    printf("\n Factorial is : %d",fact);
}

void push(int value)
 {
    if(top==MAX-1)
    {
        printf("\n Stack overflow");
    }
    else
    {
        top++;
        stack[top]=value;
    }
}

int pop()
{
    int val;
    if(top==-1)
    {
        printf("\n Stack is underflow");
        return -1;
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}
