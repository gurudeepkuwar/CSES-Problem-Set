#define ll long long 
#include <bits/stdc++.h>
using namespace std;

void jets(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    jets();
    int n;
    cin>>n;
    if (n==1)
        cout<<"1";
    else if( n==2 || n==3)
        cout<< "NO SOLUTION";
    else {
            for(int i=2;i<=n;i+=2)
                cout<<i<<" ";
            for(int i=1;i<=n;i+=2)
                cout<<i<<" ";
    }
    return 0;
}