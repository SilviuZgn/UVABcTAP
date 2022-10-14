// NrPozitiilor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n, x, v[100], i, nr = 0;
	cin >> n >> x;
	for (i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	for (i = 1; i <= n; i++)
	{
		if (v[i] == x) cout << i << ' ';
	}
}