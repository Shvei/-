#include<algorithm>
#include<iostream>
using namespace std;
using ll=long long;
const int N=1e5+9;
ll w[N];

void solve(){
	int n;cin>>n;
	string s;cin>>s;
	sort(s.begin(),s.end());
	if(s=="Wgknou")cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}




int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	int t;cin>>t;	
	while(t--){
		solve();
	}
	return 0;
}


