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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    jets();
    int n,sum;
    cin>>n>>sum;
    std::vector<int> vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    vector<vector<int>> dp(n+1,vector<int> (sum+1));
    for(int j=1;j<sum+1;j++)
        dp[0][j]=INT_MAX-1;
    for(int i=0;i<n+1;i++)
        dp[i][0]=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(vec[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else{
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-vec[i-1]]);
            }
        }
    }
    if(dp[n][sum]>=INT_MAX-1)
        cout<<-1<<endl;
    else
        cout<<dp[n][sum]<<endl;;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}