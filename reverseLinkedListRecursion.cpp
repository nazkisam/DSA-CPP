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

void insertAtTail(Node* &tail,int data){
  Node* temp = new Node(data);
  tail->next = temp;
  tail = temp;
}


void print(Node* &head){
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }


}

void reverseRecursion(Node* &head, Node* &prev, Node* &curr){

if(curr == NULL){
  head = prev;
  return;
}

Node* forward = curr->next;
reverseRecursion(head,curr,forward);
curr->next = prev;

}

Node* reverseLL(Node* &head){
  Node* curr = head;
  Node* prev = NULL;

  reverseRecursion(head,prev,curr);
  return head;
}




int main(){
Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;

insertAtTail(tail,2);
insertAtTail(tail,3);

print(head);
cout<<endl;
reverseLL(head);
print(head);
}