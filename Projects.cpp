//#define sort(nums) sort(nums.begin(),nums.end())
#include <bits/stdc++.h>
#define mod 1000000007
#define deb(x) cout<<#x<<" "<<x<<endl
using namespace std;
using ll = long long int;
typedef struct project{
    ll s,e,b;
}p;

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int find(std::vector<p> &vec,int i){
    auto it=lower_bound(vec.begin(), vec.end(),i);
    if(it==vec.begin())
        return 0;
    


}

bool cmp(p &p1,p &p2){
    return p1.e<p2.e;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    jets();
    ll n;
    cin>>n;
    std::vector<p> vec;
    for(int i=0;i<n;i++){
        cin>>vec[i].s>>vec[i].e>>vec[i].b;
    }
    sort(vec.begin(), vec.end(),cmp);
    vector<ll> endpts;
    for(p &i : vec){
        endpts.push_back(i.e);
    }
    ll dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++){
        ll op1=dp[i-1];
        ll op2=vec[i-1];
        int j=find(endpts,vec[i-1].s);
        op2+=dp[j];
        dp[i]=max(op1,op2);
    }
    return 0;
}