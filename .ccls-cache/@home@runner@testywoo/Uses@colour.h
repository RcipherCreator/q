#include <stdio.h>

void f_red(char *word){
	printf("\033[;31m%s\033[;131m", word);
}

void b_red(char *word){
	printf("\033[;41m%s\033[;131m", word);
}

void p_red(){
	printf("\033[;41m  \033[;131m");
}

void f_green(char *word){
	printf("\033[;32m%s\033[;131m", word);
}

void b_green(char *word){
	printf("\033[;42m%s\033[;131m", word);
}

void p_green(){
	printf("\033[;42m  \033[;131m");
}

void f_brown(char *word){
	printf("\033[;33m%s\033[;131m", word);
}

void b_brown(char *word){
	printf("\033[;43m%s\033[;131m", word);
}

void p_brown(){
	printf("\033[;43m  \033[;131m");
}

void f_blue(char *word){
	printf("\033[;34m%s\033[;131m", word);
}

void b_blue(char *word){
	printf("\033[;44m%s\033[;131m", word);
}

void p_blue(){
	printf("\033[;44m  \033[;131m");
}

void f_pink(char *word){
	printf("\033[;35m%s\033[;131m", word);
}

void b_pink(char *word){
	printf("\033[;45m%s\033[;131m", word);
}

void p_pink(){
	printf("\033[;45m  \033[;131m");
}

void f_teal(char *word){
	printf("\033[;36m%s\033[;131m", word);
}

void b_teal(char *word){
	printf("\033[;46m%s\033[;131m", word);
}

void p_teal(){
	printf("\033[;46m  \033[;131m");
}

void f_white(char *word){
	printf("\033[;37m%s\033[;131m", word);
}

void b_white(char *word){
	printf("\033[;47m%s\033[;131m", word);
}

void p_white(){
	printf("\033[;47m  \033[;131m");
}

void f_grey(char *word){
	printf("\033[;90m%s\033[;131m", word);
}

void b_grey(char *word){
	printf("\033[;100m%s\033[;131m", word);
}

void p_grey(){
	printf("\033[;100m  \033[;131m");
}

void f_lred(char *word){
	printf("\033[;91m%s\033[;131m", word);
}

void b_lred(char *word){
	printf("\033[;101m%s\033[;131m", word);
}

void p_lred(){
	printf("\033[;101m  \033[;131m");
}

void f_lgreen(char *word){
	printf("\033[;92%s\033[;131m", word);
}

void b_lgreen(char *word){
	printf("\033[;102m%s\033[;131m", word);
}

void p_lgreen(){
	printf("\033[;102m  \033[;131m");
}

void f_lbrown(char *word){
	printf("\033[;93m%s\033[;131m", word);
}

void b_lbrown(char *word){
	printf("\033[;103m%s\033[;131m", word);
}

void p_lbrown(){
	printf("\033[;103m  \033[;131m");
}

void f_lblue(char *word){
	printf("\033[;94m%s\033[;131m", word);
}

void b_lblue(char *word){
	printf("\033[;104m%s\033[;131m", word);
}

void p_lblue(){
	printf("\033[;104m  \033[;131m");
}

void f_lpink(char *word){
	printf("\033[;95m%s\033[;131m", word);
}

void b_lpink(char *word){
	printf("\033[;105m%s\033[;131m", word);
}

void p_lpink(){
	printf("\033[;105m  \033[;131m");
}

void f_lteal(char *word){
	printf("\033[;96m%s\033[;131m", word);
}

void b_lteal(char *word){
	printf("\033[;106m%s\033[;131m", word);
}

void p_lteal(){
	printf("\033[;106m  \033[;131m");
}

void p_any(int r,int g,int b, int num){
	printf("\033[48;2;%d;%d;%dm", r, g, b);
	for(int i=0;i<num;i++)printf("  ");
	printf("\033[;131m");
}