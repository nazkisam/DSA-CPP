#include<iostream>
using namespace std;

// creating the class.
class Node{
  public:
  int data;
  Node* prev;
  Node* next;

//constructor.

Node(int data){
  this->data = data;
  this->prev = NULL;
  this->next = NULL;
}

};



void insertAtHead(Node* &head, int data){
  Node* temp = new Node(data);
  temp->next = head;
  temp->prev = NULL;
  head->prev = temp;
  head = temp;
  
}



void insertAtTail(Node* &tail, int data){
 Node* temp = new Node(data);
 tail->next = temp;
 temp->prev = tail;
 tail = temp;
}


void print(Node* &head){
  Node* temp = head;

  while(temp != NULL){
    cout<<" "<<temp->prev <<" " <<temp <<" "<<temp->data<<" " <<temp->next;
    temp = temp->next;
  }
}


Node* reverseLinkedList(Node* &head,Node* &tail){
  Node* prev = NULL;
  Node* curr = head;
  Node* forward = NULL;

  while(curr!=NULL){
  forward = curr->next;
  curr->next = prev;
  prev = curr;
  curr = forward;
  }
  return prev;

}


int main(){

Node* node1 = new Node(2);
Node* head = node1;
Node* tail = node1;

insertAtHead(head,1);
insertAtTail(tail,5);

print(head);
//cout<<endl;
//reverseLinkedList(head,tail);






}