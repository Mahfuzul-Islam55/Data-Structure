#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;
struct node{
    int data;
    Node *next;
};

Node *head;

Node *createNode(int item,Node *next){

    Node *newNode=(Node *)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("Error! Could not Create A New Node\n");
        exit(1);
    }
    newNode->data=item;
    newNode->next=next;

    return newNode;
}

Node *removeNode(Node *head,Node *node)
{
    if(node==head){
        head=node->next;
        free(node);
        return head;
    }

    Node *currentNode=head;
    while(currentNode->next!=NULL){
        if(currentNode->next==node){
            break;
        }
    }
    currentNode=currentNode->next;

    if(currentNode==NULL){
        return head;
    }

    currentNode->next=node->next;

    free(node);

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


Node *prepend(Node *head,int item)
{
    Node *newNode=createNode(item,head);

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

int main()
{
    Node *n1,*head,*n2;

    n1=createNode(10,NULL);
    head=n1;
    printLinkedList(head);

    head=prepend(head,20);
    printLinkedList(head);

    head=append(head,30);
    printLinkedList(head);

    head=removeNode(head,n1);
    printLinkedList(head);

    n2=head;
    head=removeNode(head,n2);
    printLinkedList(head);

    n2=head;
    head=removeNode(head,n2);
    printLinkedList(head);

    return 0;
}






