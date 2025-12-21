#include <stdio.h>

int main() {
	long long p, q, r, distance1, distance2;
	scanf("%lld %lld %lld", &p, &q, &r);

	distance1 = (r + (q - p));
	distance2 = distance1 + (r + (q - p));	


	printf("%lld", distance2);
	
	return 0;
}