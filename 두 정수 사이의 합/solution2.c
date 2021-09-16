#include <stdio.h>

int main() {
	int i = 0;
	int a = 1;
	int b = 10;
	int min = 0;
	int max = 0;

	if (a > b) {
		min = b;
		max = a;
	}
	else {
		min = a;
		max = b;
	}
	long long sum = 0;

	for (i = min; i <= max; i++) {
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}

// github link : https://github.com/ppangjong/programmers.git