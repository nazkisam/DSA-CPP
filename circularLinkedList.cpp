#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

//constructor.

Node(int data){
this->data = data;
this->next = NULL;

}


};

void insertAtHead(Node* &head,int data){
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node* &tail,Node* &head,int data){

Node* temp = new Node(data);
tail->next = temp;
tail = temp;
tail->next = head;

}


void print(Node* &head){
  Node* temp = head;

  do{
    cout<<temp<<" " <<temp->data<<" ";
    
    cout<<temp->next<<" ";
    temp= temp->next;
  }
  while(temp!=head);
  {
    cout<<endl;
  }
  
}


int main(){

Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;


insertAtTail(tail,head,2);
insertAtTail(tail,head,3);
insertAtTail(tail,head,4);
insertAtTail(tail,head,5);

print(head);



}