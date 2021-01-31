#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

Node *head;

Node *createNode(int item,Node *next)
{
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Error! Could not make New Node!\n");
        exit(1);
    }
    newNode->data=item;
    newNode->next=next;

    return newNode;

}


Node *prepend(Node *head,int item)
{
    Node *newNode=createNode(item,head);

    return newNode;
}
int main()
{
    Node *n1,*n2,*head,*n3;

    n1=createNode(10,NULL);
    head=n1;

    head=prepend(head,20);
    n2=head;

    n3=n2->next;
    printf("First data = %d\n",n2->data);
    printf("Second data = %d\n",n3->data);


    return 0;
}
