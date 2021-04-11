#include <stdio.h>
#include <math.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n", (int)ceil(m * 1.0 / n));
}
