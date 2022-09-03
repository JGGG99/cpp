#include <iostream>
using namespace std;

int main()
{
	int i = 0,k,j,p,o=0;
	int max;
	int a[100],m[30];
	cin >> p;
	for (j = 0; j < p; j++)
	{
		i = 0;
		cin >> k;
		for (i = 0; i < k; i++)
		{
			cin >> a[i];
		}
		max = 0;
		for (i = 1; i < k ; i++)
		{
			if (a[i] > a[max])
				max = i;
			else
				continue;
		}
		m[o++]=max;
	}
	for (i = 0; i < o;i++)
	{
		cout << m[i];
		cout << '\n';
	}
	return 0;
}