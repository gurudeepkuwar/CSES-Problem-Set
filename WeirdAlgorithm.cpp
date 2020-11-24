#define ll long long 
#include <bits/stdc++.h>
using namespace std;

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/
    jets();
    ll n;
    cin>>n;
    while (n!=1){
    	cout<<n<<" ";
    	if (n%2==0)
    		n=n/2;
    	else
    		n=n*3+1;
    }
	cout<<n;
    return 0;
}