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

bool findPartition(int a[], int n) {
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    if(sum%2!=0)
        return false;
    sum/=2;
    int dp[n+1][sum+1];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int j=1;j<sum+1;j++)
        dp[0][j]=0;
    for(int i=1;i<n+1;i++)
        dp[i][0]=1;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(a[i-1]<=j)
                dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i-1]];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    jets();
    int arr[]={1,2,3,4,8,6};
    cout<<findPartition(arr,6);

    return 0;
}