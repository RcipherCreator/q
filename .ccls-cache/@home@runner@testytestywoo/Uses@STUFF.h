#include<stdio.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "colour.h"
#include <time.h>



void delay(double number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 10000 * number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
char kbhit()
{
    struct termios term;
    tcgetattr(0, &term);

	struct termios term2 = term;
    term2.c_lflag &= ~ICANON;
    tcsetattr(0, TCSANOW, &term2);

    int byteswaiting;
    ioctl(0, FIONREAD, &byteswaiting);

    tcsetattr(0, TCSANOW, &term);
if(byteswaiting > 0){
	char c=getchar();
	return c;
}
	else{
		return 0;
	}
    
}
char input() {
  int c;
  char a = '^[[A', b = '^[[B', e = '^[[C', f = '^[[D', g = '\n', clear = 'c';
  static struct termios oldt, newt;
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  scanf("%c", &c);
  if ((c) != a) {
    if ((c) != b) {
      if ((c) != e) {
        if ((c) != f) {
          if ((c) != g) {
            if ((c) != clear) {
              return '0';
            } else {
              return 'c';
            }
          } else {
            return 'N';
          }
        } else {
          return 'D';
        }
      } else {
        return 'C';
      }
    } else {
      return 'B';
    }
  } else {
    return 'A';
  }
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}
void clear(){
	printf("\033[2J");
}
void save(){
	printf("\033[;s");
}
void load(){
	printf("\033[;u");
}
void gotoxy(int x, int y){
	printf("\033[%d;%dH", y, x);
}
void loadings(int time){
	char loading[11][75]={
	"bbbwwbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwbbbbbwwbbbbbbbbbbbbbbbbbbbbbbbbb",
	"bbbwwbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwbbbbbwwbbbbbbbbbbbbbbbbbbbbbbbbb",
	"bbbwwbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
	"bbbwwbbbbbbbbbbwwwwwbbbbwwwwwbbbbbwwwwbwwbbbbbbbbbbbbbbbbbbbbbbbbwwwwbwwb",
	"bbbwwbbbbbbbbbwwbbbwwbbbwwwwwwbbbwwbbwwwwbbwwwwwbbbbbwwbwwwwbbbbwwbbbwwwb",
	"bbbwwbbbbbbbbwwbbbbbwwbbbbbbwwbbwwbbbbwwwbbwwwwwbbbbbwwwwwwwwbbwwbbbbbwwb",
	"bbbwwbbbbbbbbwwbbbbbwwbbbwwwwwbbwwbbbbwwwbbbbbwwbbbbbwwbbbbwwbbwwbbbbbwwb",
	"bbbwwbbbbbbbbwwbbbbbwwbbwwwwwwbbwwbbbbwwwbbbbbwwbbbbbwwbbbbwwbbwwbbbbbwwb",
	"bbbwwbbbbbbbbwwwbbbwwwbbwwbbwwbbwwwbbwwwwbbbbbwwbbbbbwwbbbbwwbbwwwbbbwwwb",
	"bbbwwwwwwwwbbbwwwwwwwbbbwwwwwwbbbwwwwwwwwbbbbbwwwbbbbwwbbbbwwbbbwwwwwwwwb",
	"bbbwwwwwwwwbbbbwwwwwbbbbbwwwwwbbbbwwwwbwwbbbbbbwwwbbbwwbbbbwwbbbbwwwwwwwb",
	};
		clear();
	gotoxy(400,69);
	for(int i=0;i<11;i++){for(int j=0;j<75;j++)if(loading[i][j]=='w')p_white();else printf("  ");printf("\n");
for(int j=0;j<80;j++)printf("     ");
		}
}
void loading1(){
	char loading1[6][75]={
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwb",
	"bbbbbbbbbbbbbbbbbbbbbprbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwb",
	"bbbbbbbbbbbbbbbbbbbbbrgbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwbbbbwwbb",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwwwwwbbb",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwwbbbb",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
	};
	gotoxy(400,80);
	
	for(int i=0;i<6;i++){for(int j=0;j<75;j++)if(loading1[i][j]=='w')p_white();else if(loading1[i][j]=='p')p_pink();else if(loading1[i][j]=='r')p_red();else if(loading1[i][j]=='g')p_green();else printf("  ");printf("\n");
for(int j=0;j<80;j++)printf("     ");
		}}
void loading2(){
	char loading2[6][75]={
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwb",
	"bbbbbbbbbbbbbbbbbbbbbprbbbbbbbbbbbbbbbbtlbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwb",
	"bbbbbbbbbbbbbbbbbbbbbrgbbbbbbbbbbbbbbbblpbbbbbbbbbbbbbbbbbbbbbbwwbbbbwwbb",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwwwwwbbb",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwwbbbb",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
	};
	gotoxy(400,80);
	for(int i=0;i<6;i++){for(int j=0;j<75;j++)if(loading2[i][j]=='w')p_white();else if(loading2[i][j]=='p')p_pink();else if(loading2[i][j]=='r')p_red();else if(loading2[i][j]=='g')p_green();else if(loading2[i][j]=='t')p_teal(); else if (loading2[i][j]=='l')p_blue(); else printf("  ");printf("\n");
for(int j=0;j<80;j++)printf("     ");
		}}
void loading3(){
	char loading3[6][75]={
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwb",
	"bbbbbbbbbbbbbbbbbbbbbprbbbbbbbbbbbbbbbbtlbbbbbbbbbbbbbbbbrgbbbbbbbbbbbwwb",
	"bbbbbbbbbbbbbbbbbbbbbrgbbbbbbbbbbbbbbbblpbbbbbbbbbbbbbbbbgtbbbbwwbbbbwwbb",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwwwwwbbb",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwwwbbbb",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
	};
	gotoxy(400,80);
	
	for(int i=0;i<6;i++){for(int j=0;j<75;j++)if(loading3[i][j]=='w')p_white();else if(loading3[i][j]=='p')p_pink();else if(loading3[i][j]=='r')p_red();else if(loading3[i][j]=='g')p_green();else if(loading3[i][j]=='t')p_teal(); else if (loading3[i][j]=='l')p_blue(); else printf("  ");printf("\n");
for(int j=0;j<80;j++)printf("     ");
		}}


void loady(int time){
	
	loadings(0);
	
while(1){
    
	
	loading1(0);
	for(int i=0;i<10000;i++)printf(" \b");
	
	loading2(0);
	for(int i=0;i<10000;i++)printf(" \b");
	
	loading3(0);
	for(int i=0;i<10000;i++)printf(" \b");
	
	}
}