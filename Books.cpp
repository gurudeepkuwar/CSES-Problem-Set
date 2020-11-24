//#define sort(nums) sort(nums.begin(),nums.end())
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
using ll= long long int;

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    jets();
    int n,W;
    cin>>n>>W;
    std::vector<int> wt(n),value(n);
    for(int i=0;i<n;i++){
    	cin>>wt[i];
    }
    for(int i=0;i<n;i++){
    	cin>>value[i];
    }
    int dp[n+1][W+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<n+1;i++){
    	for(int j=1;j<W+1;j++){
    		if(wt[i-1]<=j){
    			dp[i][j]=max(dp[i-1][j]%mod,(value[i-1]%mod+dp[i-1][j-wt[i-1]]%mod)%mod);
    		}
    		else
    			dp[i][j]=dp[i-1][j];
    	}
    }
    // for(int i=0;i<=n;i++){
    // 	for(int j=0;j<=W;j++){
    // 		cout<<dp[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }
    cout<<dp[n][W]%mod;
    return 0;
}