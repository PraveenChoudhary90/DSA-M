#include <iostream>
using namespace std;
class node
{
public:node *l, *r;
int d;
public:node(int data)
{
    d=data;
    l=NULL;
    r=NULL;
};
};
void inorder(node *r){
    if(r==NULL){
        return;
    }
    inorder(r->l);
    cout <<r->d;
    inorder(r->r);
}
void preorder(node *r){
      if(r==NULL){
        return;
    }
    cout <<r->d;
    preorder(r->l);
    preorder(r->r);
}

void postorder(node *r){
      if(r==NULL){
        return;
    }
    postorder(r->l);
    postorder(r->r);
    cout <<r->d;

}

int main(){
     node *root = new node(10);
    root->l = new node(20);
    root->r = new node(30);
     preorder(root) ;
     cout << "\t";
    cout << "\n";
     inorder(root);
     cout << "\t";
    cout << "\n";
    postorder(root);

}