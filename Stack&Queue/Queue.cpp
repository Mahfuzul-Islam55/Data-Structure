#include<bits/stdc++.h>
using namespace std;
///time complexity of enqueue & dequeue is O(1)
#define QSIZE 10

typedef struct
{
    int data[QSIZE+1];
    int head,tail;
}Queue;

void enqueue(Queue *q,int item)
{
    if((q->tail+1)%(QSIZE+1)==q->head){
        printf("Queue is full!\n");
        return ;
    }
    q->data[q->tail]=item;
    q->tail=(q->tail+1)%(QSIZE+1);
}

int dequeue(Queue *q)
{
    int item;
    if(q->tail==q->head){
        printf("Queue is empty!\n");
        return -1;
    }
    item=q->data[q->head];
    q->head=(q->head+1)%(QSIZE+1);

    return item;
}

int main()
{
    Queue q;
    int item;

    q.head=0;
    q.tail=0;

    enqueue(&q,5);
    printf("Tail = %d\n",q.tail);

    enqueue(&q,10);
    printf("Tail = %d\n",q.tail);

    printf("Beginning head = %d\n",q.head);
    item=dequeue(&q);
    printf("Item = %d, head = %d\n",item,q.head);

    item=dequeue(&q);
    printf("Item = %d, head = %d\n",item,q.head);

    item=dequeue(&q);
    printf("Item = %d, head = %d\n",item,q.head);



}

