#include<iostream>
using namespace std;


//creating the LinkedList class
class Node{
  public:
  int data;
  Node* next;

//constructor

Node(int data){
  this->data = data;
  this->next = NULL;
}};


void insertAtHead(Node* &head, int data ){
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node* &tail, int data){
  Node* temp = new Node(data);     //in the first iteration the tail  and the head point to same node so we can
  tail->next = temp;              //say that this line says head->next = temp 
  tail = temp;                
}


void posIns(Node* &head,int position, int data){
  Node* temp = head;
  int cnt = 1;

  while(cnt < position-1)
  temp = temp->next;
  cnt++;

  Node* nodeToIns = new Node(data);
  nodeToIns->next = temp->next;
  temp->next = nodeToIns;




}




void print(Node* &head){
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }

}

int main(){

Node* node1 = new Node(2);
//we will create a head and a tail that will be updated every time any new node is added to head or tail.
Node* head = node1;
Node* tail = node1;









  insertAtTail(tail,3);
  insertAtHead(head,1);
 
 
  posIns(head,2,22);




print(head);


}