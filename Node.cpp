//
//  Node.cpp
//  assignmet3333333
//
//  Created by Khaled  Nana  on 23/10/2022.
//

#include "Node.hpp"

void Node::printList(Node* n)
{
    while (n != NULL) {
            cout << n->data << " ";
            n = n->next;
        }
}
void Node::insertAfter(Node* prev_node, int new_data)
{
 
    
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void Node::deleteNode(Node* head_ref, int position)
{
    Node* temp = head_ref;
    if (position == 0) {
        head_ref = temp->next;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
    Node* next = temp->next->next;
 
     temp->next = next;
}
Node*  Node::ListfromVector(std::vector<int> vect)
{
    
    Node* head;
    head= new Node;
    Node* temp;
    for(int i=0; i<=vect.size();i++){
        temp=new Node;
        temp->data=vect[i];
        head->next=temp;
        head=head->next;
    }
    return head;
}
int Node::sumofList(Node* head)
{
    int count,temp;
    while (head->next!=NULL) {
        temp=head->data;
        count+=temp;
        head=head->next;
    }
    return count;
};
