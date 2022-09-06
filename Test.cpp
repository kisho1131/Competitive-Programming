#include<bits/stdc++.h>
using namespace std;
int binomialExp(long long a, long long b){
	int (b == 0) return 1;
	int ans = 1;
	while(b){
		if(b&1)
			ans = ans * a;
		a = a*a;
		b>>=1;
	}
	return ans;
}

int binomialExpMultiply(long long a, long long b){
	if(b == 0) return 1;
	int ans = 0;
	while(b){
		if(b & 1)
			ans = ans + a;
		a = a+a;
		b>>=1;
	}
	return ans;
}
const int N = 1e7+10;
std::vector<bool> isPrime(N, true);
void seive(int n){
	isPrime[0] = isPrime[1] = false;
	for(int i =2;i<N;++i){
		if(isPrime[i] == true)
			for(int j = 2*i;j<N;++j)
				isPrime[j] = false;
	}
}

int main(){
	int a = 1;
	int b = 2;
	int exp = binomialExp(int a, int b);
}