#include <stdio.h>

int main(void){

    int Dec, Hex, Oct;
    
    scanf("%d %x %o", &Dec, &Hex, &Oct);
    printf("UNIT_ID: %d\nUNIT_VERSION: %d\nUNIT_STATUS: %d\nSUM: %d\n",
    	Dec, Hex, Oct, Dec + Hex + Oct);
    
    return 0;
}