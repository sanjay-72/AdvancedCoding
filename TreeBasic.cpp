#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left,right;
};


struct Node* insert(int value)
{
    Node* n = new Node;
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}


Node* createTree(int arr[],n)
{
    Node* root = NULL;
    queue<Node*> q;
    for(int i = 0;i<n;i++)
    {
        root = insert(root,arr[i],n);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = createTree(arr,n);
    levelOrder(root);
}