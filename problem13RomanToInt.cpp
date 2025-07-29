// Roman  To  Integer conversion

#include <iostream>
#include <string>
    using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int total = 0;

        int values[256] = {0};
        values['I'] = 1;
        values['V'] = 5;
        values['X'] = 10;
        values['L'] = 50;
        values['C'] = 100;
        values['D'] = 500;
        values['M'] = 1000;

        for (int i = 0; i < s.size(); i++)
        {
            if (i + 1 < s.size() && values[s[i]] < values[s[i + 1]])
            {
                total = total - values[s[i]];
            }
            else
            {
                total += values[s[i]];
            }
        }
        return total;
    }
};

int main()
{
    Solution solution;
    string roman;

    cout << "Enter a Roman numeral: ";
    cin >> roman;

    int result = solution.romanToInt(roman);
    cout << "The integer value is: " << result << endl;

    return 0;
}