#include <iostream> 
using namespace std;

int tinhTongTuN(int n){
    if (n == 1)
    {
        return 1;
    } 
    else {
        return n + tinhTongTuN(n-1);
    }

    
    
}