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
    if (head == NULL) //Neu danh sach lien ket chua co phan tu nao => them vao dau
    {
        head = p;
        p->next = NULL;
    }
    
    if (m == NULL)
    { // Kiểm tra nếu m NULL
        cout << "Node m khong hop le!\n";
        delete p;
        return;
    }

    p->next = m->next;
    m->next = p;
}
void insertBefore(node *&head, node *m , int x){
    node *p = new node();
    // M tro vao dau danh sach
    if(m == head){
        p -> info = x;
        p -> next = m;
        head = p; 
    } 
    else
    {
        p -> next = m -> next;
        m -> next = p;
        p -> info = m -> info;
        m -> info = x;
    }
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

void xoa(node *&head, node *m)
{
    // TH d/s rong
    if(head == NULL)
    {
        cout<<"\n Danh sach rong";
        return;
    }
    // TH nut tro boi M la nut dau tien cua d/s
    if(head == m)
    {
        head = m->next;
        free(m);
        return;
    }
    // Tim den nut dung truoc nut tro boi M 
    node *p = new node();
    p=head;
    while(p->next != m)
    p = p->next;
    // Loai bo nut tro boi M 
    p->next = m->next;
    free(m);



}

int main()
{
    cout << "Nhap gia tri nut dau tien: ";
    int ghi;
    cin >> ghi;

    node *head = makeNode(ghi);
    node *temp = head;

    for (int i = 0; i < 6; i++)
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
    // xoa(head, temp);
    insertBefore(head,temp,30);
    duyet(head);
}
