#include <stdio.h>  
#include <stdlib.h>  

struct node{  
    int data;  
    struct node * next;  
};      
    
struct node *head, *tail = NULL;  
     
void addNode(int data) {  
    
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
 
    if(head == NULL) {    
        head = newNode;  
        tail = newNode;  
    }  
    else {    
        tail->next = newNode;   
        tail = newNode;  
    }  
}  
     
void traversal() {   
    struct node *current = head;  
      
    if(head == NULL) {  
        printf("\n list is empty \n");  
        return;  
    }  

    printf("Nodes of singly linked list: \n"); 

    while(current != NULL) {   
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  


void reverse(){
    if(head == NULL){
        printf("\n Nothing to reverse \n");
    }
    struct node * temp = head;
    tail = head;
    struct node * prev = NULL;
    struct node * curr = head;

    while(curr!=NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    head = prev;

}    
int main()  
{  
    //Add nodes to the list  
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
      
 
    traversal();  
    reverse();
    traversal();
   
    return 0;  
}  
