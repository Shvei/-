#include<iostream>
#include<queue>
using namespace std;

queue<int>q;
vector<int> b;
int main(){
	int n;cin>>n;
	
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		q.push(a);
	}
	while(q.empty()!=1){
	
		b.push_back(q.front());
		q.pop();
		q.push(q.front());
		q.pop();
		
	}
	for(auto i:b)cout<<i<<" ";
	
	return 0;
}
