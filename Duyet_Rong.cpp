#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> dsDinhKe[100]; // Luu ma tran danh sach ke
bool visited[100];

void BFS(int n)
{ // Bat dau duyet tu dinh nao
    queue<int> q;
    q.push(n);
    visited[n] = true;
    while (!q.empty())
    {
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        for (int x : dsDinhKe[temp])
        {
            if (visited[x] == false)
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main()
{
    dsDinhKe[1] = {2, 3};
    dsDinhKe[2] = {1, 4, 5};
    dsDinhKe[3] = {1, 6, 7};
    dsDinhKe[4] = {2, 8};
    dsDinhKe[5] = {2, 8};
    dsDinhKe[6] = {3, 8};
    dsDinhKe[7] = {3, 8};
    dsDinhKe[8] = {5, 6, 7};
    BFS(1);
}
