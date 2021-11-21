#include<stdio.h>

int main()
{
	double data, average = 0;
	int i, n;
	printf("How many numbers do you want to average : " );
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("\n Enter the number %d : ",i);
		scanf_s("%lf", &data);
		average = average + data;
	}
	average = average / n;
	printf("\nThe average is %lf ", average);
	return 0;
	
}