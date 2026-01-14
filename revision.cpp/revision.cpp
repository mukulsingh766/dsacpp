#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node*next;
   Node(int val){
    this->data=val;
    next=NULL;
   }
};
Node* link(){
  int data;
  cin>>data;
  while(data!=-1){
    Node*head=NULL;
    Node*newnode=new Node(data);
  }
    if(head==NULL){
      head=newnode;
    }
  
    else{  
      Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=newnode;
    
    cin>>data;
  }
  return head;

}
void print(Node*head){
   Node*temp=head;
   while(temp==NULL){
    cout<<temp->data;
    temp=temp->next;
   }
}
int main(){
   Node*root=link();
   print(root);
}