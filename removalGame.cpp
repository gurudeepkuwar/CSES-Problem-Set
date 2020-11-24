//#define sort(nums) sort(nums.begin(),nums.end())
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
using ll= long long int;
ll dp[5002][5002];
ll vec[5002];

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll solve(int i,int j){
	if(i>j) return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	ll op1=vec[i]+min(solve(i+1,j-1),solve(i+2,j));
	ll op2=vec[j]+min(solve(i,j-2),solve(i+1,j-1));
	return dp[i][j]=max(op1,op2);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    jets();
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
    	cin>>vec[i];
    	sum+=vec[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<solve(0,n-1);
    

    return 0;
}