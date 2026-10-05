#include <stdio.h>
#include <stdint.h>

int main(void){
	
	unsigned int i;
	scanf("%u", &i);
	printf("ADD: %u\nMUL2: %u\nSQR: %u\n",
		(uint8_t)(i+1), (uint8_t)(i*2), (uint8_t)(i*i));

	return 0;
}