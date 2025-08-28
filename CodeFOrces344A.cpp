
/*The first line of the input contains an integer n (1 ≤ n ≤ 100000) — the number of magnets. Then n lines follow. The i-th line (1 ≤ i ≤ n) contains either characters "01", if Mike put the i-th magnet in the "plus-minus" position, or characters "10", if Mike put the magnet in the "minus-plus" position.

Output
On the single line of the output print the number of groups of magnets.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a[n];
    int pair = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] != a[j + 1])
        {
            pair++;
        }
    }
    cout<<pair;
    return 0;

}
