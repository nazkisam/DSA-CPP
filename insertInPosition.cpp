#include<iostream>
using namespace std;


class Node{
 public:
  int data;
  Node* next;
 

 // constructor

 Node(int data){
  this->data = data;
  this ->next = NULL;
}

~Node(){
  int value = this->data;
  if(this->next != NULL){
    delete next;
    this->next = NULL;


}
cout<<"memory free for the node with data: "<<data<<endl;
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

void insertInPos(Node* &head, int pos,int data){
  Node* temp = head;
  int count = 1;
  while(count<pos-1){
    temp = temp->next;
    count++;
  }
   Node* nodeToIns = new Node(data);
   nodeToIns->next = temp->next;
   temp->next =nodeToIns;


  } 


void deleteNode(int position, Node* &head, Node* &tail){

//deleting the first node

if(position == 1){
 Node* temp = head;
 head = head->next;
 temp->next =NULL;
 delete temp;
}

else{
//deleting other elements.
Node* current = head;
Node* prev = NULL;

int cnt = 1;
while(cnt < position){
  prev = current;
  current = current -> next;
  cnt++;

}

prev->next = current->next;
current->next = NULL;
delete(current);
}



Node* temp = head;
while (temp != NULL && temp->next != NULL) {
    temp = temp->next;
}
tail = temp;

}




void print(Node* &head){
  Node* temp = head;

  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}







int main(){
 
 Node* node1 = new Node(1);
 Node* head = node1;
 Node* tail = node1;

insertAtHead(head,2);
insertAtTail(tail,4);

insertInPos(head,2,22);


//deleteNode(1,head,tail);

print(head);

cout<<endl;

cout<<"Tail: "<<tail->data;

}