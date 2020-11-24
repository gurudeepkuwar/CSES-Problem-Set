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

void buildtree(ll* segtree,int* arr,int node,int start,int end){
	if(start==end){
		segtree[node]=arr[start];
        return;
	}
	int mid=(start+end)/2;
	buildtree(segtree,arr,2*node+1,start,mid);
	buildtree(segtree,arr,2*node+2,mid+1,end);
	segtree[node]=min(segtree[2*node+1],segtree[2*node+2]);
}

void update(ll* segtree,int node,int lx,int rx,int pos,int val){
    if(pos<lx || pos>rx)
        return;
    if(lx==rx){
        segtree[node]=val;
        return;
    }
    int mid=(lx+rx)/2;
    update(segtree,2*node+1,lx,mid,pos,val);
    update(segtree,2*node+2,mid+1,rx,pos,val);
    segtree[node]=min(segtree[2*node+1],segtree[2*node+2]);
    return;
}

int findmin(ll* segtree,int node,int lx,int rx,int l, int r){
	if(l>rx || r<lx){
		return INT_MAX;
	}
	if(lx>=l && rx<=r)
		return segtree[node];
	int mid=(lx+rx)/2;
	return min(findmin(segtree,2*node+1,lx,mid,l,r),findmin(segtree,2*node+2,mid+1,rx,l,r));
}


int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    jets();
    int n,q;
    cin>>n>>q;
    int arr[n+1];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    ll segtree[4*n];
    memset(segtree,0,sizeof(segtree));
    buildtree(segtree,arr,0,0,n-1);
    // for(int i=0;i<2*n-1;i++){
    // 	cout<<segtree[i]<<" ";
    // }
    while(q--){
        int t,l,r;
        cin>>t>>l>>r;
        l--;
        if(t==1){
            update(segtree,0,0,n-1,l,r);
        }
        else{
            r--;
            cout<<findmin(segtree,0,0,n-1,l,r)<<endl;
        }
    }
    return 0;
}