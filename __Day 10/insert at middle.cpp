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
 void insertatmiddle(node* &head,int data,int position)
 {
    // insert at start
    if(position==1)
    {
        insert(head,data);
        return;
    }
    node* temp=head;
    int cnt=1;
    while (cnt<position-1)
    {
       temp=temp->next;
       cnt++;
    }
    // insert at last position
    //creating a node of d
    node* insertdata=new node(data);
    insertdata->next=temp->next;
    temp->next=insertdata;
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
      insertatmiddle(head,22,1);
      print(head);
 }
