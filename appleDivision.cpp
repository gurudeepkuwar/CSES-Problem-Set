//#define sort(nums) sort(nums.begin(),nums.end())
#include <bits/stdc++.h>
#define mod 1000000007
#define deb(x) cout<<#x<<" "<<x<<endl
using namespace std;
using ll = long long int;

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
    unsigned long long sum=0;
    vector<unsigned long long > vec(n);
    for(int i=0;i<n;i++){
    	cin>>vec[i];
    	sum+=vec[i];
    }
    bool  dp[n+1][sum+1];
    memset(dp,1,sizeof dp);
    for(int j=1;j<=sum;j++)
    	dp[0][j]=0;
    for(ll i=1;i<=n;i++){
    	for(ll j=1;j<=sum;j++){
    			if(vec[i-1]>j){
    				dp[i][j]=false;
    			}
    			else
    				dp[i][j]=dp[i-1][j] || dp[i-1][j-vec[i-1]];
    	}
    }
    // for(int i=0;i<=n;i++){
    // 	for(int j=0;j<=sum;j++){
    // 		cout<<dp[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }
    unsigned long long min_=sum;
    for(unsigned long long j=1;j<=sum/2;j++){
    	if(dp[n][j]){
    		min_=min(min_,(sum-2*j));
    	}
    }
    cout<<min_<<endl;
    return 0;
}