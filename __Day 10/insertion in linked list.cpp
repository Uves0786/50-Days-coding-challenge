#include<bits/stdc++.h>
using namespace std;
 class node{
    public:
    int data;
    node*next;
    // construtuer
    node(int data){
        this->data=data;
        this->next=NULL;
    }
 };
 void insert(node* &head,int data)
 {
    node* temp=new node(data);
    temp->next=head;
    head=temp;
 } 
 void print(node* &head)
 {
    node*temp=head;
    while(temp!=NULL)
    {
        cout << temp-> data  << " ";
        temp=temp->next;
    }
    cout << endl;
 }
 int main()
 {
    node* node1 =new node(10);
      node* head=node1;
      print(head);
      insert(head,12);
      print(head);
       insert(head,15);
      print(head);
 }
