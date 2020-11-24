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
    int n,sum=0;
    cin>>n;
    std::vector<int> vec(n);
    for(int i=0;i<n;i++){
    	cin>>vec[i];
    	sum+=vec[i];
    }
    int dp[n+1][sum+1];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int j=1;j<sum+1;j++)
    	dp[0][j]=0;
    for(int i=1;i<n+1;i++)
    	dp[i][0]=1;
    for(int i=1;i<n+1;i++){
    	for(int j=1;j<sum+1;j++){
    		if(vec[i-1]<=j)
    			dp[i][j]=dp[i-1][j] || dp[i-1][j-vec[i-1]];
    		else
    			dp[i][j]=dp[i-1][j];
    	}
    }
    // for(int i=0;i<n+1;i++){
    // 	for(int j=0;j<sum+1;j++){
    // 		cout<<dp[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }
    int count=0;
    std::vector<int > arr;
    for(int j=1;j<=sum;j++){
    	if(dp[n][j]){
    		count++;
    		arr.push_back(j);
    	}
    }
    cout<<count<<endl;
    for(int i : arr)
    	cout<<i<< " ";
    cout<<endl;
    return 0;
}