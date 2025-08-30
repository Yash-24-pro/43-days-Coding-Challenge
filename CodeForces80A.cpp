/* check if two given no are consecutive prime numbers or not*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> vec;
    for (int i = 2; i < 50; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            vec.push_back(i);
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == n)
        {
            if (vec[i + 1] == m)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
    }
    return 0;
}