// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all
//  non - alphanumeric characters, it reads the same forward and backward.Alphanumeric characters include letters and numbers.
// Given a string s,return true if it is a palindrome, or false otherwise.

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.length() - 1;
        while (left < right)
        {
            while (left < right && !isalnum(s[left]))
            {
                left++;
            }
            while (left < right && !isalnum(s[right]))
            {
                right--;
            }
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main()
{
    string input;
    cout << "Enter a string to check for palindrome: ";
    getline(cin, input);

    Solution sol;
    bool result = sol.isPalindrome(input);

    if (result)
    {
        cout << "The string is a valid palindrome." << endl;
    }
    else
    {
        cout << "The string is NOT a valid palindrome." << endl;
    }

    return 0;
}
