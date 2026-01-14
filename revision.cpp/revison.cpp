#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
   public:
   int data;
   Node*left;
   Node*right;
   Node(int data){
      this->data=data;
       left=right=NULL;
   }
};
Node* buildtree(vector<int>preorder){
  static int idx=-1; 
  idx++;
  if(preorder[idx]==-1){
   return NULL;
  }
   Node*currnode=new Node(preorder[idx]);
   currnode->left=buildtree(preorder);
   currnode->right=buildtree(preorder);
   return currnode;
}
void preorderr(Node*root){
   if(root==NULL){
      return ;
   }
   cout<<root->data<<" ";
   preorderr(root->left);
   preorderr(root->right);
}
void level(Node*root){
   if(root==NULL){
      return;
   }
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
    Node*temp=q.front();
    q.pop();
    cout<<temp->data<<" "; 
    if(temp->left!=NULL){
      q.push(temp->left);
    }
    if(temp->right!=NULL){
      q.push(temp->right);
    }
   }
}
int height(Node*root){
   if(root==NULL){
      return 0;
   }
   int left=height(root->left);
   int right=height(root->right);
   int total=max(left,right)+1;
   return total;
}
int main(){
   vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
   Node*root=buildtree(preorder);
   // preorderr(root);
   // level(root);
   cout<<height(root);
}  