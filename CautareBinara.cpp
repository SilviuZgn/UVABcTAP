// CautareBinara.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void CautareBinara(int x, int n,int v[])
{
    int low, high,mid;
    low = 1;
    high = n;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (v[mid] < x) { low = mid + 1; }
        else if (v[mid] > x) { high = mid - 1; }
        cout << mid;
    }
}

int main()
{
    int x, n, v[100], i;
    cin >> x;
    cin >> n;
    for (i = 1; i <= n; i++)
    {cin >> v[i];}
    CautareBinara(x, n, v);
}
