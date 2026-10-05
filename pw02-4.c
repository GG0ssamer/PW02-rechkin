#include <stdio.h>
#include <limits.h>

int main(void){
	
	printf("INT_MIN: %d\nINT_MAX: %d\nUINT_MAX: %u\nRANGE_OK: %d\n",
		INT_MIN, INT_MAX, UINT_MAX,
		(unsigned int)INT_MAX * 2u + 1u == UINT_MAX);

	return 0;
}