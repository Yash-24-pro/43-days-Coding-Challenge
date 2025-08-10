/*There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    int ctr = 0;
    cin >> n;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            ctr++;
        }
    }
    cout << ctr;

    return 0;
}