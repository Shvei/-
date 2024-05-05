#include<math.h>
#include<iostream>
using namespace std;
const int N=100;


int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int k;cin>>k;
	int a[N]={0};
	int i=1;
	while(k>1){
		
		if(k%2==0){
			a[i]=1;
			k/=2;
		}	
		else {
			a[i]=2;
			k/=2;
		}
		i++;
	}
	cout<<i-1<<endl;
	for(int j=i-1;j>0;j--)cout<<a[j]<<' ';
	return 0;
}


