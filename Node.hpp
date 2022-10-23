//
//  Node.hpp
//  assignmet3333333
//
//  Created by Khaled  Nana  on 23/10/2022.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <vector>
using namespace std;
#include <iostream>
class Node {
public:
    int data;
    Node* next;
    void printList(Node* n);
    void insertAfter(Node* prev_node, int new_data);
    void deleteNode(Node* head_ref, int position);
    Node* ListfromVector(vector<int> vect);
    int sumofList(Node* head);

};

#endif /* Node_hpp */
