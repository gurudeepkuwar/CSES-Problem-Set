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

int solve(int el,vector<int>& vec){
	int n=vec.size();
	int low=0,high=n-1;
	int ans=-1;
	int mid;
	while(low<=high){
		mid=low+(high-low)/2;
		if(vec[mid]==el){
			vec.erase(vec.begin()+mid);
			return el;
		}
		else if(vec[mid]<el){
			ans=mid;
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	if(ans==-1)
		return -1;
	int res=vec[ans];
	vec.erase(vec.begin()+ans);
	return res;

}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    jets();
    int n,m;
    cin>>n>>m;
    //vector<int> vec(n);
    multiset<int> s;
    for(int i=0;i<n;i++){
    	int el;
    	cin>>el;
    	s.insert(el);
    }
    //sort(vec.begin(),vec.end());
    for(int i=0;i<m;i++){
    	int el;
    	cin>>el;
    	auto it=s.lower_bound(el+1);
    	if(it==s.begin()){
    		cout<<-1<<" ";
    	}
    	else{
    		--it;
    		cout<<*it<<" ";
    		s.erase(it);
    	}
    	// for(int i : vec){
    	// 	cout<<i<<" ";
    	// }
    	// cout<<endl;
    }

    
    return 0;
}