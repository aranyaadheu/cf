#include <stdio.h>

long long factorial(int n)
{
	if(n == 0){
		return 1;
	}
	return (n * factorial(n-1)) % 10000;
}

int main() {
	long long n;
	scanf("%lld", &n);

	if(n >= 25){
		printf("0000\n");
	} else{
		printf("%lld\n", factorial(n));
	}
	
	

	return 0;
}