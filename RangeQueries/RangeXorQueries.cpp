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

void buildtree(ll* segtree,ll* arr,int node,int start,int end){
	if(start==end){
		segtree[node]=arr[start];
        return;
	}
	int mid=(start+end)/2;
	buildtree(segtree,arr,2*node+1,start,mid);
	buildtree(segtree,arr,2*node+2,mid+1,end);
	segtree[node]=(segtree[2*node+1] ^ segtree[2*node+2]);
}

int findXor(ll* segtree,int node,int lx,int rx,int l, int r){
	if(l>rx || r<lx){
		return 0;
	}
	if(lx>=l && rx<=r)
		return segtree[node];
	int mid=(lx+rx)/2;
	return (findXor(segtree,2*node+1,lx,mid,l,r) ^ findXor(segtree,2*node+2,mid+1,rx,l,r));
}


int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    jets();
    int n,q;
    cin>>n>>q;
    ll arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    ll segtree[4*n]={0};
    buildtree(segtree,arr,0,0,n-1);
    while(q--){
    	int l,r;
    	cin>>l>>r;
    	l--,r--;
    	cout<<findXor(segtree,0,0,n-1,l,r)<<endl;

    }


    return 0;
}