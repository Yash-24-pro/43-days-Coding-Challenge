/*The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not contain unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t, s;
    cin >> s;
    cin >> t;
    if (s.length() == t.length())
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != t[t.length() - i - 1])
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}