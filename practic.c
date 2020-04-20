#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {
	int N, search;
	printf("Input N: ");
	scanf("%d",&N);
	printf("Searched Number: ");
	scanf("%d", &search);
	int *ar;
	ar = (int*)malloc(sizeof(int)*N);
	clock_t start = clock();
	for (int i = 0; i < N; i++)
	{
		ar[i] = N-i;
	}
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (ar[i] == search)
		{
			printf("Searched : %d\n", search);
			double duration = ((double)(clock() - start)) / CLOCKS_PER_SEC;
			printf("Time: %lf\n", duration);
			break;
		}
		else
		{
			count++;
		}
	}
	if (count == N)
	{
		printf("-1\n");
		double duration = ((double)(clock() - start)) / CLOCKS_PER_SEC;
		printf("Time: %lf\n", duration);
	}
	free(ar);
}