# STACK

The **STACK** is a linear Data STructure. 

## Getting Started

Compile the program:
   ```bash
   gcc simple_stack_array.c
   ```
  If you want to modify the output file then compile the source code by the following:
      ```
      gcc simple_stack_array.c -o modified_name
      ```
replace the modified name with what  you want.......

Run the output file:
   **for Windows:** (by default)
   ```bash
   ./a.exe
   ```
  **for Linux & Mac:** (by default)
  ```bash
   ./a.out
  ```

#The Source code By using array data structure is given below:
  ```bash
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
  ```

     

## Source code code By using Linked List data structure is given below:
  ```bash
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
  ```



## Contributing

Contributions are welcome! If you find a bug or have an enhancement idea, feel free to open an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---
