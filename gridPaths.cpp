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
    int n;
    cin>>n;
    std::vector<vector<ll>> grid(n,vector<ll> (n));
    ll dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		char temp;
    		cin>>temp;
    		grid[i][j]=(temp=='.') ? 1 : 0;
    	}
    }
    //  for(int i=0;i<n;i++){
    // 	for(int j=0;j<n;j++){
    // 		cout<<grid[i][j];
    // 	}
    // 	cout<<endl;
    // }
    if(grid[0][0]==0 || grid[n-1][n-1]==0){
    	cout<<0;
    	return 0;
    }

    dp[0][0]=1;
    for(int i=1;i<n;i++){
    	if(grid[i][0]==0)
    		dp[i][0]=0;
    	else
    		dp[i][0]=(dp[i-1][0])?1:0;
    }
    for(int j=1;j<n;j++){
    	if(grid[0][j]==0)
    		dp[0][j]=0;
    	else
    		dp[0][j]=(dp[0][j-1])?1:0;
    }
    for(int i=1;i<n;i++){
    	for(int j=1;j<n;j++){
    		dp[i][j]=(grid[i][j])?(dp[i-1][j]+dp[i][j-1])%mod:0;
    	}
    }
    // for(int i=0;i<n;i++){
    // 	for(int j=0;j<n;j++){
    // 		cout<<dp[i][j];
    // 	}
    // 	cout<<endl;
    // }
    cout<<dp[n-1][n-1];
    return 0;
}