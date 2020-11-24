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
    vector<vector<int>> A ={     {1, 18},
            {18, 23},
            {15, 29},
            {4, 15},
            {2, 11},
            {5, 13}
					};
	    sort(A.begin(),A.end(),[](vector<int> a,vector<int> b){
        return (a[0]-b[0]);
    });
    for(vector<int> vec : A){
    	cout<<vec[0]<<" "<<vec[1]<<endl;
    }				


    return 0;
}