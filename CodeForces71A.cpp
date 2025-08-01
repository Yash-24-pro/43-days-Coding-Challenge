// Way Too Long Words
/* "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n"*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of strings you want to enter: ";
    cin>>n;
    for(int i=0;i<n; ++i){
         string s;
        cout<<"enter string:";
        cin>>s;
        int l = s.length();
    
        if (l > 10){
            cout<<s[0]<<(l-2)<<s[l-1]<<endl;;
        }
        
            else{
            cout << s <<endl;;
        }
    }
    return 0;
}
