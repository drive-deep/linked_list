
  
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

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
    
     node *prev=NULL,*next1=NULL,*curr=head;
    
    while(curr!=NULL){
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
    head=prev;
    
    cout<<"linked_list after reversal"<<endl;
    q=head;
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
    
    
    return 0;
}

