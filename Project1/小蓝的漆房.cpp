//#include<bits/stdc++.h>
//using namespace std;
//const int maxn=1e7+9;
// 
//void solve(){
//	int n,k;
//	int ans=1e7+9;
//	int a[maxn];
//	cin>>n>>k;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	for(int j=1;j<=60;j++){
//		int cnt=0;
//		for(int i=1;i<=n;i++){
//			if(a[i]==j)continue;
//			else {
//				i+=k-1;
//				cnt+=1;
//			}
//		}
//		ans=min(ans,cnt);
//	}
//	cout<<ans<<"\n";
//}
//
//int main(){
//	int c=1;
//	cin>>c;
//	while(c--){
//		solve();
//	}
//	
//	return 0;
//}
