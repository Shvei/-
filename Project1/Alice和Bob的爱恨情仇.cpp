#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int maxn=2*1e6;
ll a[maxn];

void solve(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	ll n,k;
	cin>>n>>k;
	priority_queue<ll,vector<ll>,less<ll>>pq;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		pq.push(a[i]);
	}
	ll x=0;
	
	while(1){
		x+=1;
		ll res=pq.top()-pow(k,pq.top()/k);
		pq.pop();
		if(res)pq.push(res);
		if(pq.empty())break;
	}
	if(x%2==0)cout<<"Bob"<<endl;
	else cout<<"Alice"<<endl;
}

signed main(){
	
	int t=1;
	while(t--){
		solve();
	}
	
	
}
