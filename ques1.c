#include <stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node * next;
};

struct node * front = NULL;
struct node * rear = NULL;

void insert(int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    if(front == NULL){
        front = ptr;
        rear = ptr;
        front->next = NULL;
        rear->next = NULL;
    }else{
        rear->next = ptr;
        ptr->next = NULL;
        rear = ptr;
    }
}
void delete(){
    if(front==NULL){
        printf("\n underflow \n");
    }else{
        struct node * firstEle = front;
        front = front->next;
        free(firstEle);
    }
}
int main(){

    insert(10);
    insert(20);
    insert(30);
    delete();
    delete();

    printf("%d" , front->data);
    printf("%d" , rear->data);



}