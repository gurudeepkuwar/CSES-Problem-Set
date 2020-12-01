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
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++){
    	int el;
    	cin>>el;
    	vec[i]={el,i};
    }
    sort(vec.begin(),vec.end());
    // for(int i=0;i<n;i++){
    // 	cout<<vec[i].first<<" "<<vec[i].second<<endl;
    // }
    int i=0,j=n-1;
    while(i<j){
    	if((vec[i].first + vec[j].first) == x){
    		if(vec[i].second<vec[j].second){
    			cout<<vec[i].second+1<<" "<<vec[j].second+1;
    		}
    		else{
    			cout<<vec[j].second+1<<" "<<vec[i].second+1;
    		}
    		return 0;
    	}
    	else if(vec[i].first + vec[j].first <x){
    		i++;
    	}
    	else{
    		j--;
    	}
    }
    cout<<"IMPOSSIBLE";
    return 0;
}