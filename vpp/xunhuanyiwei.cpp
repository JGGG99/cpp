#include <iostream>
using namespace std;
int main()
{
    int s, i, n, t;
    int a[15], b[15];
    cin >> s;
    cin >> t;
    for (i = 0; i <= 15; i++)
    {
        if (s % 2 == 1)
            a[i] = 1;
        else
            a[i] = 0;
        s = s / 2;
    }
    for (i = 0; i < 8; i++)
    {
        n = a[15 - i];
        a[15 - i] = a[i];
        a[i] = n;
    }
    for (i = 0; i <= 7; i++)
    {
        cout << a[i];
    }
    cout << ' ';
    for (i = 8; i <= 15; i++)
    {
        cout << a[i];
    }
    cout << '\n';
    
    for (i = 0; i <= 15; i++)
    {
        if (i - t < 0)
        {
            b[16 + i - t] = a[i];
        }
        else if (i - t >= 16)
            b[i - t - 16] = a[i];
        else
            b[i - t] = a[i];
    }
    for (i = 0; i <= 7; i++)
    {
        cout << b[i];
    }
    cout << ' ';
    for (i = 8; i <= 15; i++)
    {
        cout << b[i];
    }
    return 0;
}