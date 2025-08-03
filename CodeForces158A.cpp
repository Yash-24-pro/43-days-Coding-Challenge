/*"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.*/


#include <bits/stdc++.h>
using namespace std;

int main()
{   
    cout<<"Enter n and k: ";
    int n, k;
    cin >> n >> k;
    int arr[n];
    cout<<"Enter n elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int j = 0;j<n;j++)
    {
        if (arr[j] > k)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}