#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void print(Node*head,int i){
    Node*temp=head;
    int count=0;
    while(count<i){
        temp=temp->next;
        count++;
    }
    cout<<temp->data;

}
int main(){
Node n1(5);
Node*head=&n1;
Node n2(4);
Node n3(9);
Node n4(-2);
 n1.next=&n2;
     n2.next=&n3;
     n3.next=&n4;
int i=2;
print(head,i);
}