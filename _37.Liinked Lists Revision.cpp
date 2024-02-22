#include <bits/stdc++.h>

using namespace std;

//code for node
class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

//code for inserting the element in the linked list to the end
void insertvalue(node* &head, int val){
    
    node* n = new node(val);
    node* temp = head;

    if(head == NULL){
        head = n;
        return;
    }

    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
}

//code for displaying the element of the Linked Lists
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " -> " ;
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

//code for adding the element at the start of Linked Lists
void insertvalue2(node* &head, int val){
    node* n = new node(val);
    n -> next = head;
    head = n;
}

//searching the element in the given linked lists
string search(node* head,int key){
    node* temp = head;
    bool flag = false;
    while (temp -> next != NULL){
        if(temp ->data == key){
            flag = false;
        }
        else{
            flag = true;
        }
        if(flag == true){
            return "True";
        }
        temp = temp -> next;
    }
    return "False";
}

//Delete at head
void deletehead(node* &head){
    node* todelete = head;
    head = head -> next;
    delete todelete;
}

//deleting the node in a linked list
void deletenode(node* &head,int key){

    if(head == NULL){
        return;
    }

    if(head ->next == NULL){
        deletehead(head);
        return;
    }

    node* temp = head;
    while (temp->next->data != key){
        temp = temp -> next;
    }
    node* todelete = temp->next;
    temp->next = temp -> next -> next;
    delete todelete;
}

int main(){

    node* head = NULL;

    for(int i = 6; i<=10; i++){
        insertvalue(head,i);
    }

    display(head);

    for(int i = 5; i>=1; i--){
        insertvalue2(head,i);
    }

    display(head);

    cout << search(head,5) << endl;

    deletenode(head,5);

    display(head);
    
    return 0;
}