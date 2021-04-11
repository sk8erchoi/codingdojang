#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);

	int * start;	
	start = (int *) malloc(sizeof(int) * n);
	
	int sum = 0;
	for(int i=0; i<n; i++) {
		int * ptr = start + sizeof(int) * n;
		scanf("%d", ptr);
		sum += *ptr;
	}	
	
	float avg = sum * 1.0 / n;

	printf("%d\n", sum);
	printf("%f\n", avg);

	free(start);
}

