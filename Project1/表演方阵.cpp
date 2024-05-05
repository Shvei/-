
#include<iostream>
using namespace std;
using ll=long long;
const int N=1e5+9;
ll w[N];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cout<<"请输入一个整数n:"<<endl;
	int n;cin>>n;
	int m=1;
	
	while(m*m<=n){
		m++;	
	}
	cout<<m-1<<endl;
	

		
	return 0;
}


