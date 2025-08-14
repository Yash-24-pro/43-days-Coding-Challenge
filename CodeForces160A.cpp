/*Input
The first line contains integer n (1 ≤ n ≤ 100) — the number of coins. The second line contains a sequence of n integers a1, a2, ..., an (1 ≤ ai ≤ 100) — the coins' values. All numbers are separated with spaces.

Output
In the single line print the single number — the minimum needed number of coins.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
        sum += a[k];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    int count = 0;
    int curr_sum = 0;
    for (int l = 0; l < n; l++)
    {
        curr_sum += a[l];
        count++;
        if (curr_sum > sum / 2)
            break;
    }
    cout << count;

    return 0;
}