
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+9;
double w[N],prefix[N];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	ll n,k;cin>>n>>k;
	for(ll i=1;i<=n;i++)cin>>w[i];
	sort(w+1,w+1+n);
	
	if(ceil(w[1]/2)>k){
		cout<<0<<endl;
		return 0;
	}  
	
	for(ll i=1;i<=n;i++){
		prefix[i]=prefix[i-1]+w[i];
	}
	
	ll sum=0;
	for(ll i=0;i<n;i++){
		sum=ceil(w[n-i]/2)+prefix[n-i-1];	
		if(sum<=k){
			cout<<n-i<<endl;
			break;
		}
	}
		
	return 0;
}


