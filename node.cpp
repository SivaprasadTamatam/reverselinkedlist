#include<iostream>
using namespace std;



class Node{
public:
    int data;
    Node* next;

    Node(int d) :data(d), next(nullptr){}
};

Node* Reverse(Node* r){
    Node* curr = r;
    Node* next = nullptr, *pre = nullptr;

    while(curr != nullptr){
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}

void PrintList(Node* r){
    Node* t = r;

    while(t!=nullptr){
        cout<<t->data<<endl;
        t = t->next;
    }
}

int main(){

    Node* r = new Node(1);
    r->next = new  Node(2);
    r->next->next = new Node(3);
    PrintList(r);
    cout<<" ___________________"<<endl;
    PrintList(Reverse(r));
}