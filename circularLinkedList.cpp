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

~Node(){
  cout<<"deleted ";

}

};

void insertAtHead(Node* &head,Node* &tail,int data){
  Node* temp = new Node(data);

  //check if list is empty.
  if(head == NULL){
    head = temp;
    tail = temp;
    tail->next = head; 
  }
  else{



  temp->next = head;
  head = temp;
  tail->next = head;
}
}

void insertAtTail(Node* &tail,Node* &head,int data){

Node* temp = new Node(data);
  //check if tail is null.
  if(tail == NULL){
    head = temp;
    tail = temp;
    tail->next = head;
  }
  else{


tail->next = temp;
tail = temp;
tail->next = head;

}
}


void deleteNode(int value, Node* &head, Node* &tail){

  if(head == NULL){
    cout<<"Nothing to delete";
    return;
  }
     //delete node by value.
    Node* prev = tail;
    Node* current = tail->next;

    while(current->data != value){
      prev = current;
      current = current->next;
    
    }

    //handle single node link list

    if(current == head  && current == tail){
      head = NULL;
      tail = NULL;
    }


    // handling greater then two nodes.
    else if(current == tail){
      tail = prev;
    }
    else{
       prev->next = current->next;
    }


    current->next = NULL;
    delete current;

  }







void print(Node* &head){
  Node* temp = head;

if(head == NULL){
  cout<<"list is empty"<<endl;
  return; 
}


  do{
    cout<<temp<<" " <<temp->data<<" ";
    
    cout<<temp->next<<" ";
    temp= temp->next;
  }
  while(temp!=head);
}
  
   
  
  


int main(){

//Node* node1 = new Node(1);
//Node* head = node1;
//Node* tail = node1;
//tail->next = head;

Node* head = NULL;
Node* tail = NULL;

insertAtTail(tail,head,2);
//insertAtTail(tail,head,3);
//insertAtTail(tail,head,4);
//insertAtTail(tail,head,5);
//insertAtHead(head,tail,0);



//print(head);
cout<<endl;

deleteNode(2,head,tail);

print(head);

}