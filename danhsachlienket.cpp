/*De bai : Khoi tao 1 array list it nhat co 6 node va viet ham them 1 not vao sau vi tri thu 4*/
#include <iostream>
using namespace std;

struct node
{
    int info;
    node *next;
};

void insertAfter(node *&head, node *m, int x)
{
    node *p = new node();
    p->info = x;

    if (m == NULL)
    { // Kiểm tra nếu m NULL
        cout << "Node m khong hop le!\n";
        delete p;
        return;
    }

    p->next = m->next;
    m->next = p;
}

void duyet(node *head)
{
    while (head != NULL)
    {
        cout << head->info << " ";
        head = head->next;
    }
    cout << endl;
}

node *makeNode(int x)
{
    node *newNode = new node();
    newNode->info = x;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    cout << "Nhap gia tri nut dau tien: ";
    int ghi;
    cin >> ghi;

    node *head = makeNode(ghi);
    node *temp = head;

    for (int i = 0; i < 5; i++)
    {
        cout << "Nhap gia tri: ";
        cin >> ghi;
        temp->next = makeNode(ghi);
        temp = temp->next; // Cập nhật temp
    }

    temp = head;
    for (int i = 0; i < 3 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    cout << "Nhap gia tri muon them sau vi tri thu 4:";
    int giaTriThem;
    cin >> giaTriThem;
    insertAfter(head, temp, giaTriThem);
    duyet(head);
}
