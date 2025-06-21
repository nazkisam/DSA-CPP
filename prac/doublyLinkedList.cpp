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

~Node(){
  int value = this->data;
  if(this->next != NULL){
    delete next;
    this->next= NULL;
  }
}


};

//inserting at head.
void insertAtHead(Node* &head,int data){
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

//insert at position

void insertAtPos(Node* &head,Node* &tail, int pos, int data){

if(pos == 1){
  //cout<<"| head function fired |";
  insertAtHead(head,data);
  return;
}

 
 Node* current = head;



  int cnt = 1;
  while(cnt<pos-1){
    current = current->next;
  cnt++;
  }


  if(current->next == NULL){
   // cout<<"| Tail function fired | ";
  insertAtTail(tail,data);
  return;
}



  
Node* nodeToIns = new Node(data);
nodeToIns->next = current->next;
nodeToIns->prev = current;
current->next = nodeToIns;

if(nodeToIns->next  != NULL){
nodeToIns->next->prev = nodeToIns;
} 
}


void deleteNode(int position, Node* &head , Node* &tail){

  if(position == 1){
  Node* temp = head;
  head = head->next;
  head->prev = NULL;
  temp->next = NULL;
  
  delete temp;
  return;
  }



Node*  current = head;
Node* prev = NULL;

int cnt = 1;
while(cnt < position){
  prev = current;
  current = current->next;
  cnt++;
}

current->prev = NULL;
prev->next = current->next;
current->next = NULL;

delete(current);
//there is a destructor in class to de allocate the memory.
}

void print(Node* &head){

Node* temp = head;

while(temp != NULL){
  cout<<temp->prev<<" ";
  cout<<"|"<<temp->data<<","<<temp<<"|";
  cout<<temp->next<<" ";

  temp = temp->next;
}
}


int main(){

Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;

insertAtHead(head,2);
insertAtHead(head,3);


insertAtPos(head,tail,1,7);
print(head);
cout<<endl;
deleteNode(4,head,tail);

print(head);


}