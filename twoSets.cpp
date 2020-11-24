//#define sort(nums) sort(nums.begin(),nums.end())
#include <bits/stdc++.h>
#define mod 1000000007
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
      cin >> n;
      int target = n*(n+1)/2;
      if (target%2) {
        cout << 0 << endl;
        return 0;
      }
      target /= 2;

      vector<vector<int>> dp(n,vector<int>(target+1,0));
      dp[0][0] = 1;
      for (int i = 1; i < n; i++) {
        for (int j = 0; j <= target; j++) {
          dp[i][j] = dp[i-1][j];
          int left = j-i;
          if (left >= 0) {
    	(dp[i][j] += dp[i-1][left]) %= mod;
          }
        }
      }
      cout << dp[n-1][target] << endl;
    // for(int i=0;i<n+1;i++){
    // 	for(int j=0;j<sum+1;j++){
    // 		cout<<dp[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }


    return 0;
}