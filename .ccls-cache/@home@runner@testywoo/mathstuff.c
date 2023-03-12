#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int k=9;
	


char* itoa(int value, char* result, int base) {
		// check that the base if valid
		if (base < 2 || base > 36) { *result = '\0'; return result; }

		char* ptr = result, *ptr1 = result, tmp_char;
		int tmp_value;

		do {
			tmp_value = value;
			value /= base;
			*ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
		} while ( value );

		// Apply negative sign
		if (tmp_value < 0) *ptr++ = '-';
		*ptr-- = '\0';
		while(ptr1 < ptr) {
			tmp_char = *ptr;
			*ptr--= *ptr1;
			*ptr1++ = tmp_char;
		}
		return result;
	}

int oogabooga(float a){
a=(int)a*10;
	int i;
int biglolly;
int end;
char* str;
	
	char fin;
	itoa(a,str,10);

while(1==1){
	i++;
	if(str[i]=='\0'){
	break;
}
	fin=str[i];
	}
	char og[1]={str[i]};
	biglolly=atoi(og);
	return biglolly;
}

int randomnum(int max, int min){
	int rand;
k++;
	
rand=oogabooga(oogabooga(10*((sqrt(2)*(10^k))-oogabooga(sqrt(2)*(10^k)))));
		while(rand<min&&rand>max)
	{
		randomnum(min,max);

		}
	return rand;
	
}