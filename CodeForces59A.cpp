/*Input
The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

Output
Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int countUpper = 0;

    for (char c : s)
    {
        if (isupper(c))
        {
            countUpper++;
        }
    }
    if (countUpper > s.length() - countUpper)
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }
    else
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }

    cout << s;
    return 0;
}