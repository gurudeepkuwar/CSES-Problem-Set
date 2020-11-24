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
    int n=s.length();
    int count[26]={0};
    for(char c : s){
    	count[c-'A']++;
    }
    int odd=0;
    char c;
    int val=0;
    for(int i=0;i<26;i++){
    	if(count[i]&1){
    		c='A'+i;
    		val=count[i];
    		odd++;
    	}
    	if(odd>1){
    		cout<<"NO SOLUTION"<<endl;
    		return 0;
    	}
    }
    //cout<<c<<endl;
    
    //cout<<str<<endl;
    string str1="",str2="";
    for(int k=0;k<26;k++){
    	if(count[k]==val || count[k]==0)
    		continue;
    	int temp=count[k];
    	//cout<<'A'+k<<" "<<temp<<endl;
    	while(temp){
    		str1.push_back('A'+k);
    		str2.push_back('A'+k);
    		temp-=2;
    	}
    	//cout<<i<<" "<<j<<endl;
    }
    while(val>1){
    		str1.push_back(c);
    		str2.push_back(c);
    	val-=2;
    }
    if(val==1){
	    str1.push_back(c);
    }
	reverse(str2.begin(),str2.end());
    str1.append(str2);
    cout<<str1<<endl;
    return 0;
}