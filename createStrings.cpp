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
    string s;
    cin>>s;
    int len=s.length();
    sort(s.begin(), s.end());
    string temp=s;
    vector<string> vec;
    do {
    	vec.push_back(temp);
    	next_permutation(temp.begin(),temp.end());
    }
    while(temp!=s);
    cout<<vec.size()<<endl;
    for(string s : vec){
    	cout<<s<<endl;
    }
    return 0;
}