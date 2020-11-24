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
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    if(sum%2!=0){
    	cout<<"NO";
    	return 0;
    }
    sum/=2;

    cout<<"YES"<<endl;
    std::vector<unsigned long int> vec1,vec2;
    while(n){
    	// cout<<sum<<endl;
    	if(sum-n>=0){
    		vec1.push_back(n);
    		sum-=n;
    	}
    	else{
    		vec2.push_back(n);
    	}
    	n--;
    }
    cout<<vec1.size()<<endl;
    for(int i : vec1)
    	cout<<i<<" ";
    cout<<endl;
    cout<<vec2.size()<<endl;
    for(int i : vec2)
    	cout<<i<<" ";
    cout<<endl;



    return 0;
}