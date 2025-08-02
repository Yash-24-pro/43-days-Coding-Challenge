/*The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. 
Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line 
equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number 
shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by spaces.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;
    int n;
    cout<<"enter n ";
    cin >> n;
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2 &&  a <= 1 && b<=1 && c<=1)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}