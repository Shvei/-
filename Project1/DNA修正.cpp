#include<bits/stdc++.h>
using namespace std;

map<char,char>ans;
map<pair<char,char>,int>mp;
void solve(){
	ans['A']='T';
	ans['T']='A';
	ans['C']='G';
	ans['G']='C';
	int n;cin>>n;
	string a,b;
	cin>>a>>b;
	a=' '+a;
	b=' '+b;
	for(int i=1;i<=n;i++){
		if(ans[a[i]]==b[i])
			continue;
		else mp[{a[i],b[i]}]+=1; 
			
	}
	int res=0;
	for(auto[now,cns1]:mp){
		auto[A,C]=now;
		char T=ans[A];
		char G=ans[C];
		int cns2=mp[{G,T}];
		int cns=min(cns1,cns2);
		mp[{A,C}]-=cns;
		mp[{G,T}]-=cns;
		res+=cns;
	}
	for(auto[now,cns]:mp){
		res+=cns;
		
	}
	cout<<res<<endl;
	
}

signed main(){
	
	int t=1;
	while(t--){
		solve();
	}
	
	
}
