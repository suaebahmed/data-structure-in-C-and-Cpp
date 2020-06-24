#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

node* header;
int size = 0;

void append()
{
    int data;
    printf("Enter the value: ");
    scanf("%d",&data);

    node* temp=(node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;

    if(header== NULL)
        header = temp;
    else
    {
        node *p=header;
        while(p->next != NULL)
            p=p->next;

        p->next = temp;
    }
    size ++;
}
void traverse()
{
    if(header==NULL)
        printf("linkedlist is empty");
    else
    {
        node* tmp = header;
        while(tmp!=NULL)
        {
            printf("%d ",tmp->data);
            tmp= tmp->next;
        }
    }
}

int main()
{
    while(1)
    {
        int x;
        printf("choose option: \n");
        printf("1-> append \n");
        printf("2-> display \n");
        printf("3-> delete \n");
        printf("4-> quit \n");

        scanf("%d",&x);

        switch(x){
        case 1:
            append();
            break;
        case 2:
            traverse();
            break;
        case 3:
           // break;
        case 4:
           // delete();
            exit(1);
            break;
        default:
            printf("Enter validate option");
            break;
        }
    }
}
