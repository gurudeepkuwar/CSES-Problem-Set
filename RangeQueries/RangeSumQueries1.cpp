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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    jets();
    int n,q;
    cin>>n>>q;
   	vector<ll> sum(n,0),dp(n,0);
    for(int i=0;i<n;i++){
    	cin>>sum[i];
    }
    dp[0]=sum[0];
    for(int i=1;i<n;i++){
    	dp[i]=sum[i]+dp[i-1];
    }
    while(q--){
    	int l, r;
    	cin>>l>>r;
    	if(l==1)
    		cout<<dp[r-1]<<endl;
    	else
    		cout<<dp[r-1]-dp[l-2]<<endl;
    }



    return 0;
}