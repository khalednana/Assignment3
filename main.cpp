//
//  main.cpp
//  assignmet3333333
//
//  Created by Khaled  Nana  on 23/10/2022.
//

#include <iostream>
#include <string>
#include "Node.hpp"
int main(int argc, const char * argv[]) {
    cout<<"Enter integers and enter done when you're done"<<endl;
        int x[20];
        int size;
        string str;
        for (int i=0; i<=20; i++) {
            cout<<"Integer "<<i+1<<": ";
            cin>>str;
            size=i;
            if(str == "done")
                break;
            x[i]=stoi(str);
        }
    vector<int> vector;
       vector.reserve(size);
       for (int i=size; i>=0; i--) {
           vector.insert(vector.begin(),x[i]);
       }

    Node* head;
    Node* temp;
    Node* extra;
    head=new Node;
    temp=new Node;
    extra=new Node;
    head->data=11;
    temp->data=13;
    extra->data=14;
    head->next=temp;
    temp->next=extra;
    extra->next=NULL;
    head->insertAfter(head, 12);
    
    cout<<endl;
    head->printList(head->ListfromVector(vector));
    head->printList(head);
    head->sumofList(head);
    cout<<endl;
    
    
    return 0;
}
