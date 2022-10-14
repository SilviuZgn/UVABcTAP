#include <iostream>
using namespace std;
void CautareSecventiala(int x,int n, int v[])
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (v[i] == x)
            cout << i << ' ';
    }

}
int main()
{
    int x, n, i, v[100];
    cin >> x;
    cin >> n;
    for (i = 1; i <= n; i++)
    {cin >> v[i];}
    CautareSecventiala(x, n, v);
}