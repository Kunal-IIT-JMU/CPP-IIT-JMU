//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//code for creating the node class for Linked Lists
class node
{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insert(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }
}


//Code for Reversing the Given Linked List
node* reverseRecursive(node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    node* newhead = reverseRecursive(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
}

int main(){

    return 0;
}