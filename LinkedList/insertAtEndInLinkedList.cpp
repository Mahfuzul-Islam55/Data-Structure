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


Node *append(Node *head,int item)
{
    Node *newNode=createNode(item,NULL);

    if(head==NULL){
        return newNode;
    }

    Node *currentNode=head;
    while(currentNode->next!=NULL){
        currentNode=currentNode->next;
    }
    currentNode->next=newNode;

    return head;
}

void printLinkedList(Node *head)
{
    Node *currentNode=head;
    while(currentNode!=NULL){
        printf("%d ",currentNode->data);
        currentNode=currentNode->next;
    }

    printf("\n");
}
int main()
{
    Node *n1,*head;

    n1=createNode(10,NULL);
    head=n1;

    printLinkedList(head);

    head=append(head,20);

    printLinkedList(head);

    head=append(head,30);

    printLinkedList(head);

    return 0;
}

