#include <stdio.h>
#include <math.h>

int main() {
	int array[] = {1,2,3,4,5};
	//int array[] = {3,4,5,1,2};
	//int array[] = {3,5,4,1,2,6};
	//int array[] = {1,4,1,2,6,7};

	int n = sizeof(array) / sizeof(int);
	int tmp;

	for(int i=0; i < n - 1; i++){
		for(int j=0; j < n - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}

	printf("정렬한 배열: ");
	for (int k=0; k < n; k++) {
		printf("%d ", array[k]);
	}
	printf("\n");

	printf("제일 큰 값은 %d 입니다.\n", array[n - 1]);
	printf("제일 작은 값은 %d입니다.\n", array[0]);

	if(n % 2 == 1) {
		printf("중간값은 %d입니다.\n", array[(n / 2)]);
	} else {
		float median;
		median = (array[n / 2 - 1] + array[n / 2]) * 1.0 / 2.0;
		if(floor(median) == median) {
			printf("중간값은 %d입니다~\n", (int)median);
		} else {
			printf("중간값은 %.1f입니다!\n", median);
		}
	}
}
