#include <stdio.h>
#include <stdint.h>

int main(void){
	
	printf("INT8: 	size=%zu, min=%d, max=%d, values=%llu\n",
		sizeof(int8_t), 	INT8_MIN, INT8_MAX, INT8_MAX - INT8_MIN + 1);
	
	printf("UINT8: 	size=%zu, min=%u, max=%u, values=%llu\n",
		sizeof(uint8_t), 	0, UINT8_MAX, UINT8_MAX - 0 + 1);
	
	printf("INT16: 	size=%zu, min=%d, max=%d, values=%llu\n",
		sizeof(int16_t), 	INT16_MIN, INT16_MAX, INT16_MAX - INT16_MIN + 1);
	
	printf("UINT16: size=%zu, min=%u, max=%u, values=%llu\n",
		sizeof(uint16_t), 	0ll, (long long)UINT16_MAX, (long long)UINT16_MAX - 0ll + 1);
	
	printf("INT32: 	size=%zu, min=%d, max=%d, values=%llu\n",
		sizeof(int32_t), 	(long long)INT32_MIN, 	(long long)INT32_MAX, 	(long long)INT32_MAX - (long long)INT32_MIN);
	
	printf("UINT32: size=%zu, min=%u, max=%u, values=%llu\n",
		sizeof(uint32_t), 	0ll, (long long)UINT32_MAX, UINT32_MAX - 0ll);

	return 0;
}