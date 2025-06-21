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


void insertAtPos(Node* &head, int pos, int data){
  
if(pos == 1){
  insertAtHead(head,data);
  return;
}
 
 Node* current = head;
 

 int cnt = 1;

while(cnt<pos-1){
  
  current = current->next;
  cnt ++;
}



Node* nodeToIns = new Node(data);
nodeToIns->next = current->next;
nodeToIns->prev = current;
current->next= nodeToIns;


if(nodeToIns->next != NULL){
  nodeToIns->next->prev = nodeToIns;
}

}
 








void print(Node* &head){
  Node* temp = head;
  


  while(temp!=NULL){
    

    cout<<"prev: "<<temp->prev<<endl;
    cout<<temp->data<<" "<<temp<<endl;
    cout<<"next: "<<temp->next<<endl;


    temp = temp->next;
  }
}








int main(){

Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;


insertAtTail(tail,4);
insertAtTail(tail,5);
insertAtPos(head,3,22);


print(head);

cout<<endl;

//print the list in reverse

Node* temp  = tail;
while(temp != NULL){
  cout<<temp->data<<" ";
  temp = temp->prev;
}
}