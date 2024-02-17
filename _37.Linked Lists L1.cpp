//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//linked list node class
class node
{
    public:
    int data;
    node* next;

    node (int val){
        data = val;
        next = NULL;
    }

    void insert(node * &head, int val){
        node * n = new node(val);

        node * temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = n;
        return ;
    }

    void display(node* head){
        node * temp = head;
        while (temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        return ;
    }

};

int main(){

    node * head = NULL;
    insert(head ,1);
    insert(head ,2);
    insert(head ,3);
    display(head);

    return 0;
}