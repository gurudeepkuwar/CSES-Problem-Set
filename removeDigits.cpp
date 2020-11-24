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
int solve(int n){
	if(n/10==0)
		return 1;
	int gd=INT_MIN;
	int temp=n;
	while(temp!=0){
		gd=max(gd,temp%10);
		temp/=10;
	}
	//cout<<n-gd<<endl;
	return 1 + solve(n-gd);
}
int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    jets();
    ll n;
    cin>>n;
    cout<< solve(n);

    return 0;
}