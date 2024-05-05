#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e6+9;
ll a[N],diff[N];

void solve(){
	
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	
	for(int j=1;j<=n;j++)
		diff[j]=a[j]-a[j-1];
	
	for(int i=1;i<=m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		diff[x]+=z;
		diff[y+1]-=z;
	}
	
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]+diff[i];
		cout<<max(0ll,a[i])<<" \n"[i==n];//0ll,将0转换为long long 类型
	}
	
}

signed main(){
	solve();	
}



