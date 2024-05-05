#include<math.h>
#include<iostream>
using namespace std;
const int N=100;
void solve(){
	int n;cin>>n;
	int a[N]={0},b[N]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]+=1;
	}
	int count=0;
	for(int i=1;i<=N;i++){
		if(b[i]==1)count++;
	}	
	if(count%2!=0)count+=1;
	cout<<count/2<<endl;

	
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t;cin>>t;	
	while(t--){
		solve();
	}
	return 0;
}


