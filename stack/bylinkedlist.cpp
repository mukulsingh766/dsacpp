#include<iostream>
using namespace std;
template<class T>
class Node{
    public:
   T data;
   Node*next;
    Node(T data){
    this->data=data;
     next=NULL;
   }
};
template<class T>
class stack{
public:
 Node<T>*head;


 stack(){
    head=NULL;
 }
void push(T data){
    Node<T>*newnode=new Node<T>(data);
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void pop(){
    Node<T>*temp=head; 
    head=head->next;
    temp->next=NULL;
    delete temp;
}
bool isempty()
{
    return head==NULL;
}
T top(){
    return head->data;
}
};
int main(){
    stack<int> s;
   s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    while(!s.isempty()){
       cout<<s.top()<<" ";
       s.pop();
    }
}