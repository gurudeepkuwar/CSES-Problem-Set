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
    int n,x;
    cin>>n>>x;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
    	cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int i=0,j=n-1;
    int ans=0;
    while(i<=j){
    	if(vec[i]+vec[j]<=x){
    		ans++;
    		i++;
    		j--;
    	}
    	else{
    		ans++;
    		j--;
    	}
    }
    cout<<ans<<endl;
    
    return 0;
}