#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int main() {
    // Create the head node with value 1
    Node* head = new Node(1);
    Node* current = head;
    cout<<"this is the first head "<<head<<endl;

    // Create remaining 9 nodes
    for (int i = 2; i <= 10; i++) {
        Node* newNode = new Node(i);   // create a new node
        current->next = newNode;       // link current node to new node
        cout<<newNode<<endl;
        current = newNode;             // move current to new node
        cout<<current <<" "<<newNode<<endl;
    }

    // Print the linked list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
