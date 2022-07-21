#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;

};
typedef struct node node;
node *head = NULL;

int isEmpty();
int top();
void pop();
void push(int d);

int main(){

    int input = 0;

    printf("Enter a number to convert to binary: ");
    scanf("%d", &input);
    puts("");
    push(input);

    while(!isEmpty()){
        printf("%d", top());
        pop();
        }
    puts("");

    free(head);
}

int isEmpty(){

    if(head == NULL){
        return 1;
    }
    if(head != NULL){
        return 0;
    }
    

}

int top(){

    node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    return head->data;
}

void pop(){

    node *tmp = head;
    if(head == NULL){
        printf("Nothing to pop!");
    }
    else{
        head = head->next;
    }
    free(tmp);
    
}

void push(int d){

    node *tmp = NULL;
    while(d != 0){
    tmp = malloc(sizeof(node));
    tmp->data = d % 2;
    d = d/2;
    if(head == NULL){
    tmp->next = NULL;
    }
    else{
        tmp->next = head;
    }
    head = tmp;
}
}