

include <stdio.h>
#include <stdlib.h>
struct Node{
    int data; struct Node* link;
};

struct Node* head;
void Insert(int data, int n){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=data;
    temp->link=NULL;
    int i; struct Node* temp2=head;
    if(n==1){
        temp->link=head;head=temp; return;
    }
    for(i=0;i<n-2;i++)
    {
     temp2=temp2->link;
    }
    temp->link=temp2->link;
    temp2->link=temp;
}
void Print(){
    struct Node* temp=head;
    while(temp!=NULL){
         printf("%d\n",temp->data);
        temp=temp->link;
       
    }
}
void Delete(int data){
    struct Node* temp=head;
    struct Node* temp1;
    while(temp!=NULL){
        
        if(temp->link->data==data){
            break;
        }
        temp=temp->link;
    }
    temp->link=temp->link->link;
}
int main()
{
    head=NULL;
    Insert(2,1);
    Insert(5,2);
    Insert(7,3);
    Insert(9,4);
  //  Print();
   // Delete(5);
    Print();
    return 0;
}








