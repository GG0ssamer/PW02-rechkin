#include <stdio.h>
#include <stdlib.h>

int main(void){

    printf("START\b\b\bOP \n");
    system(	// необходимо для срабатывания звукового сигнала с pipewire
    	"pw-play /usr/share/sounds/freedesktop/stereo/bell.oga");
    return 0;
}