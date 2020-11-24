#define ll long long 
#include <bits/stdc++.h>
using namespace std;

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    jets();
    int n;
    cin>>n;
    ll sum=0;
    vector<ll> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(i!=0){
            if (vec[i]<vec[i-1]){
                sum+=(vec[i-1]-vec[i]);
                vec[i]=vec[i-1];
            }
        }
    }
    cout<<sum;
    return 0;
}