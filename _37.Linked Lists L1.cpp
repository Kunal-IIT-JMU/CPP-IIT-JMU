//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//linked list node class
class node
{
    public:
    int data;
    node* next;

    node (int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return ;
    }

    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
    return ;
}

void display(node* head){
    node* temp = head;
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    return ;
}

bool search (node* head , int key){
    node* temp = head;
    while (temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){

    node * head = NULL;
    insert(head ,1);
    insert(head ,2);
    insert(head ,3);
    display(head);
    cout << search(head,2) << endl;

    return 0;
}