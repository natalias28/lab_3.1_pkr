#include <iostream>

using namespace std;

struct Node {
    int data;       
    Node* next1;   
    Node* next2;    
};

int main() {
  
    Node* node1 = new Node{ 1, nullptr, nullptr };
    Node* node2 = new Node{ 2, nullptr, nullptr };
    Node* node3 = new Node{ 3, nullptr, nullptr };
    Node* node4 = new Node{ 4, nullptr, nullptr };
    Node* node5 = new Node{ 5, nullptr, nullptr };

    node1->next1 = node2;
    node1->next2 = node3;

    node2->next1 = node4;

    node3->next1 = node4;
    node3->next2 = node5;

    node4->next1 = node5;

    cout << "Network structure successfully created!" << endl;
    cout << "Node 1 points to nodes: " << node1->next1->data << " and " << node1->next2->data << endl;
    cout << "Node 3 points to nodes: " << node3->next1->data << " and " << node3->next2->data << endl;

   
    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;

    cout << "Memory freed, structure destroyed." << endl;

    return 0;
}