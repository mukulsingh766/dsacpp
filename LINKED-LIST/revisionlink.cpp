#include<iostream>
#include<list>
using namespace std;
class Node{
public:
int data;
Node*next;
Node(int data){
    this->data=data;
    next=NULL;
}
};
void print(Node*head){
    Node*temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
Node* input(){
    int data;
    cout<<"enter the data";
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data !=-1){
        Node* newnode=new Node(data);
         if(head==NULL){
            head=newnode;
            tail=newnode;
         }else{
         Node*temp=head;
         while(temp->next != NULL){
           temp=temp->next;
         }
         temp->next=newnode;
        }
         
         cin>>data;
    }
    return head;
}
Node* insert(Node*head,int data,int n){
    Node*newnode=new Node(data);
    if(n==0){
       newnode->next=head;
       head=newnode;
       return head;
    }
        int i=0;
        Node*temp=head;
            while(i<n-1
                 && temp !=NULL){
               temp=temp->next;
               i++;
            }
            newnode->next=temp->next;
            temp->next=newnode;
}   
Node* reverse(Node*head){
    Node* curr=head;
    Node*prev=NULL;
    Node*nextnode=NULL;
    while(curr !=NULL){
        nextnode=curr->next;
        curr->next=prev;
       prev=curr;
       curr=nextnode;
    }
    head=prev;
    return head;
}
Node* msort(Node*head,Node*righthead){
    Node* i=head;
     Node*j=righthead;
     list<int>ll;
     while(head!=NULL&&righthead!=NULL){
        if(head->data<=righthead->data){
            ll.push_back(head->data);
            head=head->next;
        }else{
            ll.push_back(righthead->data);
            righthead=righthead->next;
        }
     }
     while(i!=NULL){
          ll.push_back(head->data);
            head=head->next;
     }
     while(j!=NULL){
         ll.push_back(righthead->data);
            righthead=righthead->next;
     }
     return ll.head;

}
Node* split(Node*head){
    Node*slow=head;
    Node*fast=head;
    Node*prev=NULL;
    while(fast!=NULL&&fast->next!=NULL){
      prev=slow;
      slow=slow->next;
      fast=fast->next->next;
    }
    return prev;
}
Node* merge(Node*head){
   if(head==NULL|| head->next==NULL){
    return head;
   }
   Node*righthead=split(head);
     merge(head);
     merge(righthead);
     msort(head,righthead);
}
int main(){
    //statically
  Node*head=input();
//   int i;
//   cout<<"enter where you want to enter the data";
//   cin>>i;
//   int data;
//   cout<<"data:";
//   cin>>data;
// //   insert(head,data, i);
merge(head);
  
}