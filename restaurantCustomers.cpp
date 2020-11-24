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
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
    	int a,b;
    	cin>>a>>b;
    	vec.push_back({a,0});
    	vec.push_back({b,1});
    }
    int ans=0;
    int maxAns=0;
    sort(vec.begin(),vec.end(),[&](pair<int,int>& p1,pair<int,int>& p2){
    	if(p1.first==p2.first)
    		return p1.second<p2.second;
    	return p1.first<p2.first;
    });
    for(auto& p : vec){
    	if(p.second==0){
    		ans++;
    	}
    	else{
    		ans--;
    	}
    	maxAns=max(ans,maxAns);
    }
    cout<<maxAns;

    
    return 0;
}