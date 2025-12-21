#include <stdio.h>

long long factorial(int n){
	if(n == 0){
		return 1;
	}
	return (n * factorial(n - 1)) % 10000;
}

int main() {
	
	int t;
	scanf("%d", &t);
	while(t--){
		long long n; 
		scanf("%lld", &n);

		if(n >= 25){
			printf("0000\n");
		} else{
			printf("%04lld\n", factorial(n));
		}
	}
	
	return 0;
}