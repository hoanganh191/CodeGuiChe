#include <iostream>

using namespace std;
class Stack{
    private : 
        int Stk_Max; // so luong phan tu toi da ben trong stack
        int *Stk_Arr; // mang luu du lieu stack
        int Stk_top; // vi tri cua phan tu tren dinh stack
    public :
        Stack(int size){
            Stk_Arr = new int[size];
            Stk_Max = size ;
            Stk_top = -1;
        }

        bool isEmpty(){ // kiem tra Stack rong hay ko
            if(Stk_top == -1){ 
                return true;
            }
            else
                return false;
        }

        bool isFull(){ // kiem tra Stack day hay ko
            if(Stk_top == Stk_Max -1){ // Stack day khi chi so phan tu dinh bang so luong phan tu toi da -1(do chi so cac phan tu tinh tu 0)
                return true;
            }
            else    
                return false;
        }

        bool push(int x){ // Day phan tu vao Stack
            if(!isFull()){ // Neu Stack khong day thi day phan tu vao Stack
                Stk_top ++; // chi so tu dinh Stack tang 
                Stk_Arr[Stk_top] = x;
                return true;
            }
            else
                return false;
        }

        bool pop(){ // lay phan tu o dinh ra khoi Stack 
            if(!isEmpty()){
                Stk_top --;
                return true;
            }
            else
                return false;
        }

        int top(){ // xem gia tri phan tu o dinh 
            if(isEmpty()){
                cout << "Stack rong";
                return -1;
            }
            else
                return Stk_Arr[Stk_top];
        }

};

void doiNhiPhan(int soThapPhan){
    if (soThapPhan < 100)
    {
        cout << "Can nhap so > 100 theo de bai";
        return;
    }

    Stack dsPhanDu(20);
    while (soThapPhan > 0)
    {
        dsPhanDu.push(soThapPhan%2);
        soThapPhan = soThapPhan / 2;
    }

    while (!dsPhanDu.isEmpty())
    {
        cout << dsPhanDu.top();
        dsPhanDu.pop();
    }
  
}