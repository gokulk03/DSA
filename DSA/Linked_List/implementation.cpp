#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int value;
        Node* Next;
};

void printList(Node* head){
    while(head!=NULL){
        cout<<node->value<<endl;
        head = head->next;
    }
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = NULL;

    printList(head);

}