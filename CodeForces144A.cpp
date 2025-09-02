#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max_index = 0;
    for(int j =1;j<n;j++){
        if(a[j]>a[max_index]){
            max_index=j;
        }
    }
    int min_index = n-1;
    for(int k=n-2;k>=0;k--){
        if(a[min_index]>a[k]){
            min_index = k;
        }
    }

    int total;
    if (max_index > min_index)
    {
        total = max_index + (n - 1 - min_index) - 1;
    }
    else
    {
        total = max_index + (n - 1 - min_index);
    }

    cout << total << endl;
    return 0;
}