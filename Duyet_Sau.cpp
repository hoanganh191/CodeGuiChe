#include <iostream>
#include <vector>

using namespace std;

vector<int> dsDinhKe[100];
bool visited[100];

void DFS(int n)
{
    visited[n] = true;
    cout << n << " ";
    for (int x : dsDinhKe[n])
    {
        if (visited[x] == false)
        {
            DFS(x);
        }
    }
}

int main(){
    dsDinhKe[1] = {2, 3};
    dsDinhKe[2] = {1, 4, 5};
    dsDinhKe[3] = {1, 6, 7};
    dsDinhKe[4] = {2, 8};
    dsDinhKe[5] = {2, 8};
    dsDinhKe[6] = {3, 8};
    dsDinhKe[7] = {3, 8};
    dsDinhKe[8] = {5, 6, 7};
    DFS(1);
}