#include<iostream>
#include<queue>
using namespace std;

vector<int> a;
vector<int> b;
int main(){
	int n;cin>>n;
	
	for(int i=1;i<=n;i++){
		int m;cin>>m;
		a.push_back(m);
	}
	while(a.empty()!=1){
		b.push_back(a.front());
		a.erase(a.begin());
		a.push_back(a.front());
	    a.erase(a.begin());
		
	}
	for(auto i:b)cout<<i<<" ";
	
	return 0;
}
