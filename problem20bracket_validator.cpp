
# include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        // Counters for each type of opening bracket
        int round = 0;  // for '('
        int curly = 0;  // for '{'
        int square = 0; // for '['

        // Vector to track the order of opened brackets
        vector<char> last_opened;

        for (char ch : s)
        {
            // Handle opening brackets
            if (ch == '(')
            {
                round++;
                last_opened.push_back('(');
            }
            else if (ch == '{')
            {
                curly++;
                last_opened.push_back('{');
            }
            else if (ch == '[')
            {
                square++;
                last_opened.push_back('[');
            }
            // Handle closing brackets
            else if (ch == ')')
            {
                if (last_opened.empty() || last_opened.back() != '(')
                {
                    return false;
                }
                round--;
                last_opened.pop_back();
            }
            else if (ch == '}')
            {
                if (last_opened.empty() || last_opened.back() != '{')
                {
                    return false;
                }
                curly--;
                last_opened.pop_back();
            }
            else if (ch == ']')
            {
                if (last_opened.empty() || last_opened.back() != '[')
                {
                    return false;
                }
                square--;
                last_opened.pop_back();
            }
        }

        // All brackets must be closed properly
        return round == 0 && curly == 0 && square == 0;
    }
};

int main()
{
    Solution sol;

    cout << boolalpha;
    cout << "Test 1 (): " << sol.isValid("()") << endl;
    cout << "Test 2 ()[]{}: " << sol.isValid("()[]{}") << endl;
    cout << "Test 3 (]: " << sol.isValid("(]") << endl;
    cout << "Test 4 ([)]: " << sol.isValid("([)]") << endl;
    cout << "Test 5 {[]}: " << sol.isValid("{[]}") << endl;

    return 0;
}