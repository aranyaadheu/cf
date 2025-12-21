#include <stdio.h>

int main() {

	int sum;
	scanf("%d", &sum);
	int n1, n2, n3, n4;
	scanf("%d %d %d", &n1, &n2, &n3);
	n4 = sum - (n1 + n2 + n3);
	printf("%d", n4);
	
	return 0;
}