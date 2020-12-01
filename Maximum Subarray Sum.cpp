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
    vector<int> vec(n);
    for(int i=0;i<n;i++){
    	cin>>vec[i];
    }
    ll currmax=0,maxOverall=INT_MIN;
    for(int i=0;i<n;i++){
    	if(vec[i]>currmax+vec[i]){
    		currmax=vec[i];
    	}
    	else{
    		currmax+=vec[i];
    	}
    	maxOverall=max(maxOverall,currmax);
    }
    cout<<maxOverall;
    
    return 0;
}