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

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    jets();
    int n;
    cin>>n;
    std::vector<ll> arr(n),lis(n,1);
    for(int i=0;i<n;i++)
    	cin>>arr[i];

    cout<<*max_element(lis.begin(),lis.end());

    return 0;
}