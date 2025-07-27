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
  cout<<temp<<" "<<temp->data<<" "<<temp->next<<" ";
  temp= temp->next;
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

Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;



insertAtTail(tail,3);

insertAtTail(tail,8);

print(head);

cout<<endl;

Node* reversed =reverseLinkedList(head,tail);
while(reversed != NULL){
cout<<" "<<reversed<<" " <<reversed->data<<" "<<reversed->next<<" ";
reversed = reversed->next;
}
}