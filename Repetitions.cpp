#define ll long long 
#include <bits/stdc++.h>
using namespace std;

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    jets();
    string s;
    cin>>s;
    ll count=1,ans=0;
    for(int i=1;i<s.size();i++){
        if (s[i]==s[i-1])
            count++;
        else{
            ans=max(ans,count);
            count=1;
        }
    }
    cout<<max(count,ans);
    return 0;
}