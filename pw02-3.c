#include <stdio.h>

int main(void){

	int a, b, c;
    a = 10;
    b = 010;
    c = 0x10;

    printf("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\n", a, b, c);

    printf("INT_SUFFIX: %zu %zu %zu %zu\n",
           				sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));

    printf("FLOAT_SUFFIX: %zu %zu %zu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);

    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n", sizeof('A'), sizeof(ch), sizeof("A"));
    													// sizeof("A") — строковый литерал: массив из 2 элементов char
    													//               {'A', '\0'} → 2
    
    return 0;
}