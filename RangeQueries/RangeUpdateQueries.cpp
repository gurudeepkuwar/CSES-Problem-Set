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
    int n,q;
    cin>>n>>q;
    ll arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    while(q--){
    	int t,l,r,v,k;
    	cin>>t;
    	if(t==1){
    		cin>>l>>r>>v;
    		l--,r--;
    		for(int i=l;i<=r;i++)
    			arr[i]+=v;
    	}
    	else{
    		cin>>k;
    		cout<<arr[k-1]<<endl;
    	}
    }
    return 0;
}