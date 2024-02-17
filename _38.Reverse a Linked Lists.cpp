//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Code to Create a node for the linked list
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

//code to reverse the given Linked List
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr ;

    while(currptr != NULL){
        nextptr = currptr -> next;
        currptr -> next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

//Insert function to insert the elements in the linked lists
void insert(node* &head, int val){
    node* n = new node(val);            

    if(head == NULL){                   
        head = n;
        return;}

    node* temp = head;                  
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;                   
    return ;
}

//Code to display the given Linked lists 
void display(node* head){
    node* temp = head;
    while (temp != NULL){
        cout << temp -> data << " ";    
        temp = temp -> next;            
    }
    cout << endl;
    return ;
}


int main(){
    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    display(head);
    node* newhead = reverse(head);            //creating new Linked List to store the reversed Linked List
    display(newhead);
    return 0;
}
