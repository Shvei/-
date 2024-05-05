#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=1e5+9;
ll a[N],b[N],diff[N];

int main(){
	
	ll n,k;cin>>n>>k;
	ll sum=0;
	for(ll i=1;i<=n;++i){
		cin>>a[i];
		sum+=a[i];
	}
	for(ll i=1;i<=n;++i){
		cin>>b[i];
		diff[i]=a[i]-b[i];
	}
	sort(diff+1,diff+1+n,greater<ll>());
	k=min(n,k);
		
		for(ll i=1;i<=k;i++){
			if(diff[i]>0){
				sum+=diff[i];
			}else break;	
		}
		
	
	cout<<sum<<"\n";
	return 0;
}

