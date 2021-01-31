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


int main()
{
    Node *n;
    n=createNode(10,NULL);
    printf("data = %d\n",n->data);
    return 0;
}






