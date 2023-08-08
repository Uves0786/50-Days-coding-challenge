#include<bits/stdc++.h>
using namespace std;
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };
Node *removeLoop(Node *head)
{
    if (head==NULL)
    {
        return false;
    }
    map<Node*,bool>visited;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(visited[temp]==true)
        {
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    } 
    return false;
    
}