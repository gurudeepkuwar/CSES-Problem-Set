//#define sort(nums) sort(nums.begin(),nums.end())
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/
    jets();
    int n;
    cin>>n;
    std::vector<long long int> dp(n+1);
    dp[0]=1;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=6;j++){
    		if(j<=i){
    			dp[i]=(dp[i] + dp[i-j])%mod;
    		}
    	}
    }
    cout<<dp[n]<<endl;
    return 0;
}