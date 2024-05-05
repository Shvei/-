
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+9;
ll w[N];
int main(){
	int n;cin>>n;
	if(n==1){
		ll ans=0;cin>>ans;
		ans=abs(ans);
		cout<<ans<<"\n";
		return 0;
	}
	ll sum=0;
	ll max=0,min=1e9+1;
	for(int i=1;i<=n;i++){
		cin>>w[i];
		if(i%2==0) sum-=abs(w[i]);	
		else sum+=abs(w[i]);
	}
	for(int i=1;i<=n;i++){
		if(i%2==0&&abs(w[i])>max)max=abs(w[i]);
		else if(i%2!=0&&abs(w[i])<min)min=abs(w[i]);
	}
	if(max>min)sum=sum-2*min+2*max;
	
	cout<<sum<<"\n";
	return 0;
}
