/*Input
There are two lines in each input. Each of them contains a single number. It is guaranteed that the numbers are made from 0 and 1 only and that their length is same. The numbers may start with 0. The length of each number doesn't exceed 100.

Output
Write one line — the corresponding answer. Do not omit the leading 0s.

Examples
InputCopy
1010100
0100101
OutputCopy
1110001*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cout << endl;
    cin >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i])
        {
            cout << 0;
        }
        else
            cout << 1;
    }
    return 0;
}