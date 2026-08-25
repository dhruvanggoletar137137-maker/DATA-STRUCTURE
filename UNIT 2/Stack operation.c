//92500588002
//Perform stack operation push() , pop() , peek() , update()

#include<stdio.h>
#define MAX 3

int stack[MAX],top=-1;
void push();
void pop();
void peek();
void update();
void display();

void main()
{
    int op;
    do
    {
        printf("\n Insert value :");
        printf("\n Delete value :");
        printf("\n Top most value :");
        printf("\n Update value :");
        printf("\n Display value :");
        printf("\n Exit :");
        printf("\n Enter your choice :");
        scanf("%d",&op);


    switch(op)
   {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            update();
            break;

        case 5:
            display();
            break;
        }
    }while(op!=6);
}
void push()
{
    int value;

    printf("\n Enter a value to be inserted : ");
    scanf("%d",&value);

    if(top == MAX-1)
    {
        printf("\n Stack is overflow :");
    }

    else
    {
      top ++;
      stack[top]=value;
    }
}
void pop()
{
    int val;
     if(top == -1)
        printf("\n Stack is underflow");

    else
    {
      val=stack[top];
      printf("\n Deleted value is %d:",val);
      top--;
    }
}

void peek()
{
    if(top == -1)
    {
        printf("\n Stack is empty");
    }
    else
    {
        printf("\n Topmost value",stack[top]);
    }
}

void update()
{
    int i,x;
        printf("\n Enter a value to be updated :");
        scanf("%d",&i);

        printf("\n Enter a value to be updated :");
        scanf("%d",&x);

    if(top-i+1 <= -1)
    {
        printf("\n Stack is empty");
    }

    else
    {
        stack[top-i+1] = x;
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("\n Stack is empty");
    }

    else
    {
        for(i=top;i>=0;i--)
        {
            printf("\n %d",stack[i]);
        }
    }
}
