#include<iostream>
#include <vector>
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
Node* buildtree(vector<int>nodes){
  static int idx=-1;
  idx++;
  if(nodes[idx]==-1){
    return NULL;
  }
  Node*currnode=new Node(nodes[idx]);
  currnode->left=buildtree(nodes);
  currnode->right=buildtree(nodes);
  return currnode;
}
void preorder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void level(Node*root){
  if(root==NULL){
    return;
  }
  queue<Node*>q;
  q.push(root);
  while(!q.empty()){
    Node*curr=q.front();
     q.pop();
    cout<<curr->data;
    if(curr->left!=NULL){
      q.push(curr->left);
    }
    if(curr->right!=NULL){
      q.push(curr->right);
    }

  }
}
int height(Node*root){
if(root==NULL){
  return 0;
}
int left=height(root->left);
int right=height(root->right);
int height=max(left,right)+1; 
return height;
}
int count(Node*root){
  if(root==NULL){
    return 0;
  }
  int leftcount=count(root->left);
  int rightcount=count(root->right);
  int sum=(leftcount+rightcount)+1;
  return sum;
}
int sum(Node*root){
  if(root==NULL){
    return 0;
  }
  int leftsum=sum(root->left);
  int rightsum=sum(root->right);
  int currsum=leftsum+rightsum+root->data;
  return currsum;
}
int diameter(Node*root){
 if(root==NULL){
  return 0;
 }
 int currentdia=height(root->left)+height(root->right)+1;
 int left=diameter(root->left);
 int right=diameter(root->right);
 return max(currentdia,max(left,right));

}

pair<int,int> diam2(Node*root){
  if(root==NULL){
    return make_pair(0,0);
  }
    pair<int,int>left=diam2(root->left);
    pair<int,int>right=diam2(root->right);
    int diameter=left.second+right.second+1;
    int height=max(left.second,right.second)+1;
    return make_pair(diameter,height);
}
bool result(Node*root,Node*subroot){
  if(root==NULL&&subroot==NULL){
     return true;
  }
  
        if(root==NULL||subroot==NULL){
          return false;
        }
       if(root->data==subroot->data){

       }  
        int isleftsubtree=result(root->left,subroot);
        if(!isleftsubtree){
          return  result(root->right,subroot);
      
        }
        return true;
}
      



int main(){
 vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node*root=buildtree(nodes);
vector<int>subnodes={2,4,-1,-1,5,-1,-1};
// Node*subroot=buildtree(subnodes);
// cout<<diam2(root).first;
cout<<diam2(root).first;
}