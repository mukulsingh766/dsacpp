#include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node*next;

     Node(int data){
        this->data=data;
        this->next=NULL;
     }

};
Node* input(){
    Node*head=NULL;
    Node*tail=NULL;
    int data;
    cin>>data;
    while(data!=-1){
        Node*newnode=new Node(data);
        if(head==NULL){
         head=newnode;
         tail=newnode;
        }
        else{
            Node*temp=head;
        while(temp->next!=NULL){
           temp=temp->next;
        }
        temp->next=newnode;
    }
    cin>>data;
    }
    return head;
}
void print(Node*head){
  Node*temp=head;   
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<"NULL";
}
Node* insert(Node*head,int data ,int pos){
  Node*newnode=new Node(data);
  if(pos==0){
   newnode->next=head;
   head=newnode;
   return head;
  }
  else{
   Node*temp=head;
   int count =0;
   while(count<pos-1){
     temp=temp->next;
     count++;
  }
  newnode->next=temp->next;
  temp->next=newnode;
}
return head;
}
int search(Node*head,int target){
  Node*temp=head;
  int pos=0;
  while(temp!=NULL){
    if(temp->data==target){
      return pos;
    }
    temp=temp->next;
    pos++;
  }
}
Node* reverse(Node*head){
         Node*curr=head;
         Node*prev=NULL;
         
         while(curr!=NULL){
          Node*next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
         }
         head=prev;
         return head;
}
bool detect(Node*head){
     Node*slow=head;
     Node*fast=head;
     while(fast!=NULL &&fast->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
        if(slow==fast){
          cout<<"cycle detect";
          return true;
        }
        
     }
     return false;
}
int mid(Node*head){
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
      slow=slow->next;
      fast=fast->next->next;
    }
    return slow->data;
}

int main(){

Node*head=input();
print(head);
cout<<mid(head);
 return 0;
}