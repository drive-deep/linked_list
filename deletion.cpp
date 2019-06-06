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
    //insertion---------
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
            node *tm=new node();
            
            tm->data = tmp;
            tm->next=NULL;
            p->next=tm;
            
        }
    }
    
    
    //---deletion at start in linked list-----------------
    
    if(head==NULL){
        cout<<"linked_list is empty"<<endl;
    }
    else{
        struct node *tmpp=head;
        head=tmpp->next;
        free(tmpp);
        
        //alternate way but it not free the element at start
        //head=head->next;
        
    }
    
    
    //deletion of element k in middle---------------
    node *del=head;
    int k;
    cin>>k;
    
    while(del->next->data!=k){
        del=del->next;
    }
    
    node *tmp1=del->next;
    del->next=tmp1->next;
    free(tmp1);
    
    
    //deletion at the end of linked list-----------
    
    node *tmp2=head;
    while(tmp2->next->next!=NULL){
        tmp2=tmp2->next;
    }
    node *tmp3=tmp2->next;
    tmp2->next=NULL;
    free(tmp3);
    
    //traversal----------------------------
    node *q=head;
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
    
    return 0;
}
