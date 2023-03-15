
#include <stdio.h>
#include <stdlib.h>
#include "Uses/STUFF.h"
#include <stdint.h>
#include "mafood.c"
#include <math.h>
#include <time.h>
//197,61,61
//45,58,152

void delayd(double number_of_seconds)
{
    for(int i=0;i<17246/number_of_seconds;i++)printf(" \b");
}
void delaym(double number_of_seconds)
{
    for(int i=0;i<17246*number_of_seconds;i++)printf(" \b");
}
void printsprite(int FRAME_COUNT,int FRAME_HEIGHT, int FRAME_WIDTH,uint32_t data[][1024],double frameps) {
	uint32_t guy;
	
	while(1)
	for(int k=0;k<FRAME_COUNT;k++){
for(int i=0;i<FRAME_HEIGHT;i++){for(int j=0;j<FRAME_WIDTH;j++){
	guy=data[k][i*FRAME_WIDTH+j];
	if(guy!=0x00000000){
	guy=guy-(guy/0x1000000)*0x1000000;
	uint32_t a=guy/0x10000;
	uint32_t b=guy/0x100-a*0x100;
	uint32_t c=guy-a*0x10000-b*0x100;


			p_any(abs((int)c),abs((int)b),abs((int)a),1);}
	else printf("  ");
	}
	printf("\n");}
		
		delayd(frameps);
		
		clear();
		gotoxy(1,1);
		}
}

int main(){
	printsprite(3,32,32,mafood_data,0.5);
	return 0;
}