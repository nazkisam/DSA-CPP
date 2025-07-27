#include<iostream>
using namespace std;


class Node{
public:

int data;
Node* next;

Node(int data){

  this->data = data;
  this->next = NULL;

}
};


int getLength(Node* head){
  int len = 0;
  while(head!=NULL){
    len++;
    head = head->next;
 }
 return len;
}


Node  *findMiddle(Node* head){
  int len = getLength(head);
  int ans = len/2;

  Node* temp = head;
  int cnt = 0;
  while(cnt<ans){
    temp = temp->next;
    cnt++;
    cout<<temp<<endl;
  }

 return temp;
 
}




int main(){

Node* head = new Node(1);
Node* current = head;

for(int i = 2; i<=10; i++){
  Node* newNode = new Node(i);
  current ->next = newNode;
  current = newNode;
}


Node* temp = head;
while(temp!= NULL){
  cout<<temp->data<<" ";
  temp = temp->next;
}

cout<<endl;

Node* middle = findMiddle(head);
cout<<middle->data;



}