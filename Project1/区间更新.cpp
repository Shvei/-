
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+9;
int a[N],diff[N];

void solve(int n,int m){
	
	
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int x[N],y[N],z[10];
	for(int i=1;i<=m;i++){
		cin>>x[i]>>y[i]>>z[i];
	}
	
	for(int j=1;j<=n;j++)
		diff[j]=a[j]-a[j-1];
	
	for(int i=1;i<=m;i++){
		diff[x[i]]+=z[i];
		diff[y[i]+1]-=z[i];
	}
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]+diff[i];
		cout<<a[i]<<"\n"[i==n];
	}

}

signed main(){
	int n,m;
	
	while(cin>>n>>m)solve(n,m);	
}




