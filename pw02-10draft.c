#include <stdio.h>
#include <stdint.h>

int main(){
	
	int a;
	unsigned int b;
	float c;

	scanf("%x %o %f", &a, &b, &c);
	printf("PACKET_ID: %x
			STATUS_CODE: %o
			STATUS_CHAR: %d
			VOLTAGE: %f
			CHECKSUM: %d\n",
			a, b, );

	return 0;
}