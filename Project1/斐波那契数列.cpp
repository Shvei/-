#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N =1e7+9;
ll pd[N];

//带备忘录的斐波那契数列
ll fib(int n){
	if(pd[n])return pd[n];//因为数组的默认值是0，如果未被赋值，则该if语句便不能触发
	if(n<=2)return 1;
	else {
		return pd[n]=fib(n-1)+fib(n-2);
	}
	return 0;
}	

int main(){
	int n;
	printf("请输入一个常数n：");
	cin>>n;
	for(int i=1;i<=n;++i){
		cout<<fib(i)<<endl;
		
	}
	
	return 0;
}
