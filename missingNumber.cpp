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
    vector<int> vec(n-1);
    int ans=0;
    for(int i=0;i<n-1;i++){
    	ans^=i+1;
    	cin>>vec[i];    
    	ans^=vec[i];
    }
    ans^=n;
    cout<<ans<<endl;
    return 0;
}