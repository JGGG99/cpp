#include <iostream>
using namespace std;
int main()
{
    int a[50], i, t = 0, b[50], n = 0;
    a[0] = 1;
    a[1] = 1;
    for (i = 2; i <= 25; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cin >> t;
    for (i = 0; i <= 25; i++)
    {
        if ((a[i] - t) > 0)
            b[i] = a[i] - t;
        else
            b[i] = t - a[i];
    }
    for (i = 0; i <= 25; i++)
    {
        if (b[i] > b[i + 1])
            n = i + 2;
        else if (b[i] == b[i + 1])
            n = i + 1;
        else
        {
            n = i + 1;
            break;
        }
    }
    cout << n;
    return 0;
}