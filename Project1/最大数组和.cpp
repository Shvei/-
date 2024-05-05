
#include<bits/stdc++.h>

using namespace std;
using ll=long long;
const ll N=1e5+9;


void solve(){
	ll n,k;cin>>n>>k;
	ll a[N];
	ll pre[N];
	
	for(ll i=1;i<=n;i++){
		cin>>a[i];		
	}
	sort(a+1,a+n+1);
	for(ll i=1;i<=n;i++){
		pre[i]=pre[i-1]+a[i];
	}
		
	ll res=0;
	ll ans=0;
	for(ll i=0;i<=k;i++)
	{	
		
		res=pre[n-(k-i)]-pre[2*i];
		ans=max(ans,res);
	}
	cout<<ans<<endl;
}
signed main(){
	
	ll t;cin>>t;
	while(t--){
		solve();
	}
		
}




