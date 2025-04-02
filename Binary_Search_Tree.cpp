#include <iostream>

using namespace std;

struct BSTNode
{
    int data;
    BSTNode *pLeft;  // con tro cua cay con trai
    BSTNode *pRight; // con tro cua cay con phai
};
int insert(int x, BSTNode *&root)
{
    if (root == NULL)
    {
        root = new BSTNode();
        root->data = x;
        root->pLeft = NULL;
        root->pRight = NULL;
        return 1;
    }
    else
    {
        if (root->data == x)
        {
            return 0; // da ton tai trong cay
        }
        if (root->data > x)
        {
            return insert(x, root->pLeft);
        }
        if (root->data < x)
        {
            return insert(x, root->pRight);
        }
    }
}

void preOrder(BSTNode *root)
{ // Duyet cay theo thu tu truoc (NLR)
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->pLeft);
        preOrder(root->pRight);
    }
}
void inOrder(BSTNode *root)
{ // Duyet cay theo thu tu giua (LNR)
    if (root != NULL)
    {
        inOrder(root->pLeft);
        cout << root->data << " ";
        inOrder(root->pRight);
    }
}
void postOrder(BSTNode *root)
{ // Duyet cay theo thu tu sau (LRN)
    if (root != NULL)
    {
        postOrder(root->pLeft);
        postOrder(root->pRight);
        cout << root->data << " ";
    }
}
int main()
{
    BSTNode *root = NULL;
    insert(6, root);
    insert(12, root);
    insert(5, root);
    postOrder(root);
}
