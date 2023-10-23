#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left, *right;
};
struct node *root = NULL;

void insert(int x)
{
    struct node *myNode = new node;
    myNode->data = x;
    myNode->left = NULL;
    myNode->right = NULL;

    if(root == NULL)
        root = myNode;
    else
    {
        struct node *ptr = root,*temp = root;
        while(ptr != NULL)
        {
            temp = ptr;
            if(x < ptr->data)
                ptr = ptr->left;
            else
                ptr = ptr->right;
        }
        if(x < temp->data)
            temp->left = myNode;
        else
            temp->right = myNode;
    }
}

void inorder(struct node *x)
{
    if(x == NULL)
        return;
    inorder(x->left);
    cout<<x->data<<" ";
    inorder(x->right);
}

bool touched_1 = false, touched_2 = false;

void leftOrder(struct node *p)
{
    if(p == NULL)
        return;
    cout<<p->data<<" ";
    leftOrder(p->left);
}

void rightrOrder(struct node *p)
{
    if(p == NULL)
        return;
    rightrOrder(p->right);
    if(touched_2)
        cout<<p->data<<" ";
    touched_2 = true;
}

void leafNodes(struct node *p)
{
    if(p == NULL)
        return;
    if(p->left == NULL && p->right == NULL)
    {
        if(touched_1)
            cout<<p->data<<" ";
        touched_1 = true;
        return;
    }
    leafNodes(p->left);
    leafNodes(p->right);
}
void boundaryOrder(struct node *p)
{
    if(p == NULL)
        return;
    leftOrder(p);
    leafNodes(p);
    rightrOrder(p);
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        insert(temp);
    }
    boundaryOrder(root);
}