#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left,*right;
    };
    Node* newNode(int value)
    {
        Node* temp=new Node();
        temp->data=value;
        temp->left=temp->right=NULL;
        return temp;
    }
    void printpreorder(Node*node)
    {
        if(node!=NULL)
        {
            cout<<node->data<<" ";
            printpreorder(node->left);
            printpreorder(node->right);
        }
    }


void printpostorder(Node* node)
    {
        if(node!=NULL)
            {
            printpostorder(node->left);
            printpostorder(node->right);
            cout<<node->data<<" ";
        }
    }

    void printinorder(Node*node)
    {
        if(node!=NULL)
        {
            printinorder(node->left);
            cout<<node->data<<" ";
            printinorder(node->right);
        }
    }
countElement(Node*node)
{
    if(node==NULL)
        return 0;
    return 1+countElement(node->left)+countElement(node->right);
}
int main()
{
    Node*root=newNode(10);
    root->left=newNode(20);
    root->right=newNode(30);
    root->left->left=newNode(40);
    root->left->right=newNode(50);
    cout<<"\npreorder:";
    printpreorder(root);
    cout<<"\ninorder:";
    printinorder(root);
    cout<<"\npostorder:";
    printpostorder(root);
    int count=countElement(root);
    cout<<endl<<"total element:"<<count;
    return 0;

}
