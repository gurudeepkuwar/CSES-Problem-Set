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
    ll sum=0;
    ll max_freq=0,maxEl=-1;
    for(int i=0;i<n;i++){
    	cin>>vec[i];
    	//sum+=vec[i];
    }
    sort(vec.begin(),vec.end());
    maxEl=vec[n/2];
    ll cost=0;
    for(int i : vec){
    	cost+=abs(maxEl-i);
    }
    cout<<cost;
    return 0;
}