#include<stdio.h>
#include<stdlib.h>
/*
    I learn from code school youtube channel.
*/
typedef struct node
{
    int data;
    struct node* next;
}node;

node* append(int data,node* header)
{
    // struct node* temp;
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;

    if(header==NULL)
    {
        header = temp;
    }
    else
    {
        node *p = header;
        while(p->next != NULL)
            p=p->next;

        p->next=temp;

    }
    return header;
}

node* prepand(int data,node* header)
{
    node* temp =(node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;

    if(header == NULL)
        header = temp;
    else
    {
        temp->next = header;
        header = temp;
    }
    return header;

}

void toString(node* header)
{
    if(header == NULL)
        printf("linkedlist is empty");
    else
    {
        node *p = header;
        while(p != NULL)
        {
            printf("%d ",p->data);
            p=p->next;
        }
    }
}

int main()
{
    node* header = NULL;

    header = append(10,header);
    header = append(20,header);
    header = append(30,header);
    header = append(40,header);
    header = append(50,header);
    header = prepand(5,header);
    header = prepand(2,header);
    header = prepand(0,header);

    toString(header);
}
