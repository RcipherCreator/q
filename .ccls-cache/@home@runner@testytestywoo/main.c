
#include <stdio.h>
#include <stdlib.h>
#include "Uses/STUFF.h"
#include <stdint.h>
#include "mafood.c"
#include <math.h>
#include <time.h>
//197,61,61
//45,58,152


int main() {
	uint32_t guy;
	float asdfghjkl;
	while(1)
	for(int k=0;k<mafood_FRAME_COUNT;k++){
for(int i=0;i<mafood_FRAME_HEIGHT;i++){for(int j=0;j<mafood_FRAME_WIDTH;j++){
	guy=mafood_data[k][i*mafood_FRAME_WIDTH+j];
	if(guy!=0x00000000){
	guy=guy-(guy/0x1000000)*0x1000000;
	uint32_t a=guy/0x10000;
	uint32_t b=guy/0x100-a*0x100;
	uint32_t c=guy-a*0x10000-b*0x100;


			p_any(abs((int)c),abs((int)b),abs((int)a),1);}
	else printf("  ");
	}
	printf("\n");}
		asdfghjkl=1/fps;
		delay(asdfghjkl);
		clear();
		gotoxy(1,1);
		}


	
  return 0;
}