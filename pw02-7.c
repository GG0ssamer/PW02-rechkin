#include <stdio.h>

int main(void){
	
	long double i;
	scanf("%Lf", &i);
	double 	a = i;
	float 	b = i;
	printf("%.6f %.6f %.6Lf",
		i, a, b);

	return 0;
}