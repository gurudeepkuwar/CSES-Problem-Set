//#define sort(nums) sort(nums.begin(),nums.end())
#include <bits/stdc++.h>
#define mod 1000000007
#define deb(x) cout<<#x<<" "<<x<<endl
using namespace std;
using ll = long long int;
ll segtree[20000];

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void buildtree(int* arr,int node,int start,int end){
	if(start==end){
		segtree[node]=arr[start];
	}
	int mid=(start+end)/2;
	buildtree(arr,2*node+1,start,mid);
	buildtree(arr,2*node+2,mid+1,end);
	segtree[node]=min(segtree[2*node+1],segtree[2*node+2]);
}

int findmin(int node,int lx,int rx,int l, int r){
	if(l>rx || r<lx){
		return INT_MAX;
	}
	if(lx>=l && rx<=r)
		return segtree[node];
	int mid=(lx+rx)/2;
	return min(findmin(2*node+1,lx,mid,l,r),findmin(2*node+2,mid+1,rx,l,r));
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    jets();
    cout<<"Yes";
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    memset(segtree,0,sizeof(segtree));
    buildtree(arr,0,0,n-1);
    for(int i=0;i<2*n-1;i++){
    	cout<<segtree[i]<<" ";
    }
    cout<<endl;
    while(q--){
    	int l,r;
    	cin>>l>>r;
    	cout<<findmin(0,0,n-1,l,r)<<endl;
    }
    return 0;
}