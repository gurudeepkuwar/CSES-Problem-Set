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
    string x,y;
    cin>>x>>y;
    int m=x.size(),n=y.size();
    int dp[m+1][n+1];
    for(int i=0;i<m+1;i++)
    	dp[i][0]=i;
    for(int j=0;j<n+1;j++)
    	dp[0][j]=j;
    for(int i=1;i<m+1;i++){
    	for(int j=1;j<n+1;j++){
    		if(x[i-1]==y[j-1])
    			dp[i][j]=dp[i-1][j-1];
    		else
    			dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
    	}
    }
    cout<<dp[m][n]<<endl;

    return 0;
}