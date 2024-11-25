#include<stdio.h>

#define MAX 5
int top = -1;
int arr[MAX];

void push();
void pop();
void display();
void peek();

int main()
{
    printf("\t\t\tLinear Stack\t\t\t\n");
    printf("\t\t\t************\t\t\t\n");

    int choice,i =1;
    while(i)
    {
    
        printf("\nEnter 1 to PUSH: \n");
        printf("Enter 2 to POP: \n");
        printf("Enter 3 to PEEK: \n");
        printf("Enter 4 to DISPLAY: \n");
        printf("Enter 0 to EXIT: \n");

        printf("\nEnter your choice: ");

        scanf("%d",&choice);

        switch (choice)
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
            display();
            break;
        case 0:
            i = 0;
            break;
        default:
            printf("\nInvalid Input!\n");
            break;
        }
    }
   

    return 0;
}

void push()
{   
    int data;
    printf("\nEnter data: ");
    scanf("%d",&data);

    if(top == MAX)
    {
        printf("\nOverfolw..");
    }
    else
    {
        top++;
        arr[top] = data;
    }
}

void pop()
{   
    if(top == -1)
    {
        printf("\nUnderfolw..\n");
    }
    else
    {   
        int data = arr[top];
        printf("\n%d is popped.\n",data);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\nThe stack is empty\n");
    }
    else
    {
        printf("\nThe top element is %d.\n",arr[top]);
    }
}

void display()
{
    if(top == -1)
    {
        printf("\nNothing in the stack\n");
    }
    else
    {
        printf("\nThese are the following data in this STACK: ");


        for (int i = 0;i<=top;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}