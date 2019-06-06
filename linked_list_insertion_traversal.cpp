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
    
    node *q=head;
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
    
    return 0;
}
