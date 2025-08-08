#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<char>myset;
    for(int i=0;i< s.length();i++){
        myset.insert(s[i]);
    }
    if ((myset.size()) % 2 == 0)
    {
        cout<<"CHAT WITH HER!";
    }
    else cout<<"IGNORE HIM!";
    return 0;
}