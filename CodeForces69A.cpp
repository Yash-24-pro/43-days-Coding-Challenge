#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n];
    int y[n];
    int z[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }
    int sum_x = 0;
    int sum_y = 0;
    int sum_z = 0;
    for (int j = 0; j < n; j++)
    {
        sum_x += x[j];
        sum_y += y[j];
        sum_z += z[j];
    }
    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}