#include<vector>
#include<iostream>

using namespace std;

vector<int> a;
int num;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,k;cin>>n>>k;
	
	for(int i=1;i<=n;i++){
		cin>>num;
		a.push_back(num);
	}
	while(k--){
		char s;cin>>s;
		if(s=='Z'){
			int x,y;cin>>x>>y;
			if(x>a.size())a.push_back(y);
			else a.insert(a.begin()+x,y);	
		}
		else if(s=='D'){
			int x;cin>>x;
			if(x<=a.size())a.erase(a.begin()+x);
		}
	}
	cout<<a.size()<<endl;
	for(auto &i:a)cout<<i<<" ";
	return 0;
}


