
#include<bits/stdc++.h>
#define x first
#define y second

using namespace std;
using ll=long long;
const ll N=1e5+9;
pair<ll,ll>a[N];
ll pre[N];
ll bac[N];

void solve(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	ll n;cin>>n;
	
	for(ll i=1;i<=n;i++){
		cin>>a[i].y>>a[i].x;
	}
	sort(a+1,a+n+1);
	ll s=0;
	for(ll i=1;i<=n;i++){
		pre[i]=pre[i-1]+s*(a[i].x-a[i-1].x);
		s+=a[i].y;
	} 
	
	 s=0;
	for(ll i=n;i>=1;i--){
		bac[i]=bac[i+1]+s*(a[i+1].x-a[i].x);
		s+=a[i].y;
	} 
	ll ans=1e18;
	for(ll i=1;i<=n;i++){
		ans=min(ans,pre[i]+bac[i]);
	}
	cout<<ans<<endl;
}

signed main(){
	
	int t=1;
	while(t--){
		solve();
	}
	
	
}




