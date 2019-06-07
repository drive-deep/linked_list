
  
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};


struct node* recursiveReverseLL(struct node* first){

   if(first == NULL) return NULL; // list does not exist.

   if(first->next == NULL) return first; // list with only one node.

   struct node* rest = recursiveReverseLL(first->next); // recursive call on rest.

   first->next->next = first; // make first; link to the last node in the reversed rest.

   first->next = NULL; // since first is the new last, make its link NULL.

   return rest; // rest now points to the head of the reversed list.
}


int main()
{
    
    node *head=NULL;
    int n;
    cin>>n;
    
    while(n--){
        int tmp;
        cin>>tmp;
        if(head==NULL){
           head=new node();
           head->data=tmp;
           head->next=NULL;
        }
        else{
            struct node *p=head;
            while(p->next!=NULL){
                p=p->next;
            }
            node *tm=NULL;
            tm = new node();
            tm->data = tmp;
            tm->next=NULL;
            p->next=tm;
            
        }
    }
    cout<<"linked_list before reversal"<<endl;
    struct node *q=head;
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
    cout<<endl;
    //reversal-----------
    node *first=head;
    q=recursiveReverseLL(first);
    
    
    cout<<"linked_list after reversal"<<endl;
    
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
    
    
    return 0;
}

