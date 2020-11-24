//#define sort(nums) sort(nums.begin(),nums.end())
#include <bits/stdc++.h>
#define mod 1000000007
#define size 10001
#define deb(x) cout<<#x<<" "<<x<<endl
using namespace std;
using ll = long long int;
map<pair<ll,ll>,ll> mp;
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
    //cout<<mp.max_size()<<endl;
    ll t;
    cin>>t;
    while(t--){
    	ll a,b;
    	cin>>a>>b;
    	if(a>b)
    		swap(a,b);
    	if(2*a<b){
    		cout<<"NO"<<endl;
    		continue;
    	}
    	a%=3;
    	b%=3;

    	if((a==0 && b==0) || (a==1 && b==2) || (a==2 && b==1))
    		cout<<"YES"<<endl;
    	else{
    		cout<<"NO"<<endl;
    	}
    }
    
    return 0;
}