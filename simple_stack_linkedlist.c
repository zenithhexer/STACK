#include<stdio.h>

struct node{
    int data;
    struct node * link;
};

struct node * top = NULL;

void push();
void pop();
void peek();
void display();

int main()
{   
    char ch;
    do
    {
        printf("\nEnter 1. to PUSh.\n");
        printf("Enter 2. to POP.\n");
        printf("Enter 3. to PEEK.\n");
        printf("Enter 4. to DISPLAY.\n");
        printf("Enter 0. to EXIT.\n");

        printf("\nEnter your choice: ");
        scanf("%c",&ch);

        switch (ch)
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
            
            default:
                break;
        }

    } while (ch != 0);
    

    return 0;
}

void push()
{   
    int x;
    printf("\nEnter Data: ");
    scanf("%d",&x);

    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;

    top = newnode;
}

void pop()
{
    struct node * temp;
    temp = top;
    
    if(top = NULL)
    {
        printf("\nThe STACK is empty.\n");
    }
    else
    {
        printf("\nThe poped element is : %d",temp->data);

        top = top->link;
        free(temp);        
    }
}

void peek()
{   
    if(top == NULL)
    {
        printf("The STACK is empty.\n");
    }
    else
    {
        printf("\nThe PEEK element is : %d\n",top->data);
    }
}

void display()
{   
    struct node * temp;
    temp = top;

    if(top == NULL)
    {
        printf("\nThe STACK is empty.\n");
    }
    else
    {   
        while(temp != NULL)
        {
            printf("%d ->",temp->data);
            temp = temp->link;    
        }
    }
}