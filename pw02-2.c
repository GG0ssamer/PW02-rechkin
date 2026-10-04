#include <stdio.h>
#include <stdbool.h>

int main(void){             // so this sunday night, i'm locked in at this SoundCloud 2015-2018 themed rave, and i just found out i gotta defend my c programming project on monday. like, how the hell am i supposed to comprehend this shit? what you think i'm doin' right now? nah, i'm grindin' on this from scratch, no cap. i got to defend it in 8 hours and i gotta wake up in 6. i'm in deep shit, for real.

    int i, j;
    scanf("%d %d", &i, &j);

    bool a, b;              // wrok on it...
    a = i;
    b = j;

    printf("MODULE_READY: 	%d\nFAULT_STATE: 	%d\nBOOL_SIZE: 	%zu\nFLAGS_SUM: 	%d\n",
    						a, 					b, 				sizeof(bool), 		a+b);

    return 0;
}