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
    scanf("%d",&n);
    unordered_set<ll> s;
    s.reserve(500);
    for(int i=0;i<n;i++){
    	ll e;
    	scanf("%lld",&e);
    	s.insert(e);
    }
    cout<<s.size()<<endl;
    return 0;
}