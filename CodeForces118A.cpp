/*
Petya started to attend programming lessons.On the first lesson his task was to write a simple program.The program was supposed to do the following : in the given string, consisting if uppercase and lowercase Latin letters, it :

    deletes all the vowels,
    inserts a character "." before each consonant,
    replaces all uppercase consonants with corresponding lowercase ones.Vowels are letters "A",
    "O",
    "Y",
    "E",
    "U",
    "I",
    and the rest are consonants.The program 's input is exactly one string, it should return the output as a single string, resulting after the program' s processing the initial string.
*/



#include <bits/stdc++.h>
        using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_set<char> vowel = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};
    string result;
    for (char c : s)
    {
        if (vowel.find(c) == vowel.end())
        {
            result += '.';
            result += tolower(c);
        }
    }
    cout << result;
    return 0;
}