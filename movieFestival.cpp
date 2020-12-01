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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    jets();
    int n;
    cin>>n;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
    	int arr,dep;
    	cin>>arr>>dep;
    	vec.push_back({arr,dep});
    }
    sort(vec.begin(),vec.end());
    int ans=0;
    for(int i=0;i<n;i++){
    	//cout<<i<<endl;
    	pair<int,int>& p=vec[i];
    	int start=p.first;
    	int end=p.second;
    	cout<<start<<" "<<end<<endl;
    	int j=i+1;
    	while(j<n && end>vec[j].first){
    		end=max(end,vec[j].second);
    		cout<<vec[j].first<<" "<<vec[j].second<<endl;
    		j++;
    	}
    	ans++;
    	if(i==j+1)
    		continue;
    	i=j-1;
    }
    cout<<ans;
    return 0;
}