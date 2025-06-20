#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* prev;
  Node* next;

 //constructor

 Node(int data){
  this->data = data;
  this->prev = NULL;
  this->next = NULL;
 }


};



void insertAtHead(Node* &head,int data){
  Node* temp = new Node(data);
  temp->next = head;
  temp->prev = NULL;
  head->prev = temp;
  head = temp;
}

void insertAtTail(Node* &tail,int data){
Node* temp = new Node(data);
tail->next = temp;
temp->prev = tail;
tail = temp;

}


void print(Node* &head){
  Node* temp = head;
  


  while(temp!=NULL){
    cout<<temp->data<<" "<<temp<<endl;

    cout<<"prev: "<<temp->prev<<endl;
    cout<<"next: "<<temp->next<<endl;


    temp = temp->next;
  }
}








int main(){

Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;

insertAtHead(head,2);
insertAtTail(tail,4);
insertAtTail(tail,5);


print(head);

cout<<endl;

}