//#define sort(nums) sort(nums.begin(),nums.end())
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
using ll= long long int;
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
    ll n,sum;
    cin>>n>>sum;
    std::vector<ll> vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    vector<vector<ll>> dp(n+1,vector<ll> (sum+1,0));
    for(int i=0;i<n+1;i++)
        dp[i][0]=1;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(vec[i-1]>j)
                dp[i][j]=dp[i-1][j]%mod;
            else{
                dp[i][j]=(dp[i-1][j]%mod + dp[i][j-vec[i-1]]%mod)%mod;
            }
        }
    }
    cout<<dp[n][sum]%mod<<endl;
    return 0;
}