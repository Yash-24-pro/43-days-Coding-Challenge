/*Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

Input
The only line contains an integer n (1 ≤ n ≤ 1018).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

Output
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).

Examples
Input
40047
Output
NO
Input
7747774
Output
YES
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long count = 0;
    long long num = n;
    while (num != 0)
    {

        if (num % 10 == 4 || num % 10 == 7)
        {
            count++;
        }
        num = num / 10;
    }
    if (count == 0)
    {
        cout << "NO";
        return 0;
    }
    string a;
    a = to_string(count);
    for (char digit : a)
    {
        if (digit != '4' && digit != '7')
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;

}
