
#include <stdio.h>
#include <stdlib.h>
#include "Uses/STUFF.h"
#include <stdint.h>
#include "mafood.c"
//197,61,61
//45,58,152


int main() {
	int guy;
for(int i=0;i<mafood_FRAME_HEIGHT;i++){for(int j=0;j<mafood_FRAME_WIDTH;j++){
	guy=mafood_data[0][i*mafood_FRAME_WIDTH+j];
	guy=guy/0x100;
	uint32_t a=guy/0x10000;
	uint32_t b=guy/0x100-a*0x100;
	uint32_t c=guy-a*0x10000-b*0x100;
	p_any((int)a,(int)b,(int)c,1);
	}
	printf("\n");}
	


	
  return 0;
}