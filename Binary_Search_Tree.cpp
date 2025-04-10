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

    return -1;
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

BSTNode *find(BSTNode *root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data > x)
    {
        return find(root->pLeft, x);
    }
    else if (root->data < x)
    {
        return find(root->pRight, x);
    }
    else // tim thay
        return root;
}
BSTNode *find_Max(BSTNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->pRight != NULL)
    {
        return find_Max(root->pRight);
    }
    else // tim thay nut
    {
        return root;
    }
}
BSTNode *find_Min(BSTNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->pLeft != NULL)
    {
        return find_Min(root->pLeft);
    }
    else // tim thay nut
    {
        return root;
    }
}

int delete_Node(BSTNode *&root, int x)
{
    if (root == NULL)
    {
        return 0;
    }
    // tim nut can xoa
    if (root->data > x)
    {
        return delete_Node(root->pLeft, x);
    }
    else if (root->data < x)
    {
        return delete_Node(root->pRight, x);
    }
    else // tim thay
    {
        if (root->pLeft && root->pRight)
        {
            // th 3: nut co 2 con -> tim nut thay the
            BSTNode *p = find_Max(root->pLeft);       // tim nut thay the la nut tan cung ben trai de dam bao quy tac cua cay nhi phan tim kiem
            root->data = p->data;                     // Thay the gia tri cua nut can xoa = gia tri cua nut thay the
            return delete_Node(root->pLeft, p->data); // Luc nay tro ve truong hop xoa 0 hoac 1 con , ta goi de quy
        }
        else
        {
            if (root->pRight == NULL)
            {
                root = root->pLeft;
            }
            else
            {
                root = root ->pRight;
            }
            return 1;
        }
    }
}
int main()
{
    BSTNode *root = NULL;
    insert(6, root);
    insert(12, root);
    insert(5, root);
    // postOrder(root);
    // BSTNode *result = find_Min(root);
    // cout << result->data << " ";
    delete_Node(root, 5);
    inOrder(root);
}
