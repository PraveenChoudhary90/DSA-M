#include <iostream>
using namespace std;
// struct node
// self refrence class && structure kahte hai
// recursion
// bydefault contructor private hota hai
// Two-pointer = left && node && right left right are pointer(node) and node is root
// heep memory==> run time memory genrate; 
// * --> pointer
// -> this pointer(class function name or root name same hota hai jab this pointer -> use karte hai);
class node
{
public:int data;
node *left;
node *right;
node(int d){
    data = d;
    left = NULL;
    right = NULL;
}
};
int main(){

    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    cout << "Preorder" << "\n";
    cout <<root->data <<"\t";
    cout << root->left->data << "\t";
    cout << root->right->data << "\t";

    cout << "\n";
    cout << "Inorder" << "\n";
    cout << root->left->data << "\t";
    cout <<root->data <<"\t";
    cout << root->right->data << "\t";

  cout << "\n";
     cout << "Postorder" << "\n";
    cout << root->left->data << "\t";
    cout << root->right->data << "\t";
    cout <<root->data <<"\t";


    

}