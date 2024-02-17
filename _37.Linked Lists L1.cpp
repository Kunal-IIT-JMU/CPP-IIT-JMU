//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//linked list code for creating a linked list
class node
{
    public:
    int data;       //creating a variable in the node class to store the data
    node* next;     //creating a variable in the node class to store address of next node

    node (int val)  //creating a constructer to put values of data and address of NULL in the variables
    {
        data = val;
        next = NULL;
    }
};
//this will create a linked list with one node only

//code to insert an element in the end of the linked lists
void insert(node* &head, int val){
    node* n = new node(val);            //creating a new node to add in the linked lists

    if(head == NULL){                   //adding the address of the next node in the prev
        head = n;
        return;
    }

    node* temp = head;                  //iterate through the linked lists to reach the end
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;                   //when it reaches the end of the linked list replace the address of the new element 
    return ;
}

//code for printing the linked list
void display(node* head){
    node* temp = head;
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    return ;
}

//code for searching an element in the linked lists
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
    insert(head ,1);    //entering first element in the linked lists
    insert(head ,2);    //entering second element in the linked lists
    insert(head ,3);    //entering third element in the linked lists
    display(head);      //printing the linked list
    cout << search(head,2) << endl;     //searching 2 in the linked list will give 1 if present else 0

    return 0;
}