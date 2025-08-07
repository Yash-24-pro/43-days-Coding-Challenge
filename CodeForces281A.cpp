/*Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s;
    return 0;
}