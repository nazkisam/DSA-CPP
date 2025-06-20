#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  //constructor

Node(int data){
    this ->data = data;
    this ->next = NULL;
  }
  };


void insertAtHead(Node* &head , int d){
 
 Node* temp = new Node(d);
 temp->next= head;
head  = temp;
}

void insertAtTail(Node* &tail, int d){
  Node* temp = new Node(d);
  tail->next = temp;
  tail = temp;
}





//traversing a linked list.
void print(Node* &head){
Node* temp = head;

while(temp!=NULL){
  cout<<temp->data<<" ";
  temp= temp->next;
}




}


int main(){

Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;
cout<<head<<" ";


insertAtTail(tail,3);

insertAtTail(tail,8);

print(head);



}