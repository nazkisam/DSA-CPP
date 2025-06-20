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



}






